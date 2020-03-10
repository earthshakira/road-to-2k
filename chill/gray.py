from PIL import Image
from random import randint,random
import math

CIRCLE_COUNT = 2
RADIUS_MIN = 30
RADIUS_MAX = 32
POPULATION_SIZE = 6
PXOVER = 1
PMUTATE = 0.5
ROUNDS = 1000
POPULATION = []
NEW_POPULATION = []
NUM_MUTATIONS = 6

def black_and_white_dithering(input_image_path,
    output_image_path):
    color_image = Image.open(input_image_path)
    bw = color_image.convert('1',dither=Image.NONE)
    bw.save(output_image_path)
    return bw;
 
def get_matrix(input_image):
    im = black_and_white_dithering(
        input_image,
        'bw.png')
    pixels = list(im.getdata())

    width, height = im.size
    print("{} x {}".format(width,height))
    mat = []
    mat_row = []
    for i in range(len(pixels)):
        if (i and i%width == 0):
            mat.append(mat_row)
            mat_row = []
        mat_row.append(1 if pixels[i] else 0)
    mat.append(mat_row)
    return mat, width, height

class Circle:
    
    def __init__(self,width,height,clone=None):
        self.width = width
        self.height = height
        
        if clone:
            self.radius = clone.radius
            self.x = clone.x
            self.y = clone.y
            self.color = clone.color
        else:
            self.rand_init()
    
    def rand_init(self):
        self.radius = randint(RADIUS_MIN,RADIUS_MAX)
        self.x = randint(1,self.width)
        self.y = randint(1,self.height)
        # self.color = randint(0,1)
        self.color = 0
        self.radius*=self.radius

    def get_color(self,xd,yd):
        rx = xd - self.x;
        ry = yd - self.y;
        if ((rx*rx)+(ry*ry)) <= self.radius:
            return self.color
        return -1

    def mutate(self):
        self.rand_init()
        self.radius*=self.radius

class GenoType:
    def __init__(self,width,height,result,clone=False):
        self.circles = []
        self.img = None
        self.width = width
        self.height = height
        self.fitness = -1
        if clone == False:
            for _ in range(CIRCLE_COUNT):
                self.circles.append(Circle(width,height))
        self.result = result
    
    def __eq__(self, other):
        return self.get_fitness() == other.get_fitness();

    def __hash__(self):
        return hash(self.get_fitness())

    def get_clone(self):
        clone = GenoType(self.width,self.height,self.result,clone=True)
        for circle in self.circles:
            clone.circles.append(Circle(self.width,self.height,circle))

        return clone

    def compute_img(self):
        img = []
        for x in range(self.width):
            img_row = []
            for y in range(self.height):
                color_count = [0,0]
                for circle in self.circles:
                    t = circle.get_color(x,y)
                    if t>=0:
                        color_count[t]+=1
                img_row.append(0 if color_count[0] > color_count[1] else 1)
            img.append(img_row)
        self.img = img

    def store(self,recompute=False,id=1):
        if recompute:
            self.compute_img()
        data = []
        for x in range(self.width):
            for y in range(self.height):
                data.append(255 if self.img[x][y] else 0)
        
        img = Image.new('1', (self.height,self.width))
        img.putdata(data)
        # img.save('{}.png'.format(id))
        img.show()

    def get_fitness(self):
        if self.fitness != -1:
            return self.fitness
        self.compute_img()
        fitness = 0
        for x in range(self.width):
            for y in range(self.height):
                if self.result[x][y] == self.img[x][y]:
                    fitness+=1
        self.fitness = fitness
        return fitness

    def mutate(self):
        invalidate = False
        for circle in self.circles:
            if random() < PMUTATE:
                invalidate = True
                circle.mutate()
        if invalidate:
            self.fitness = -1

def x_over(A,B):
    A.fitness = -1
    B.fitness = -1
    x_point = randint(1,CIRCLE_COUNT-1)
    for i in range(x_point):
        tmp = A.circles[i]
        A.circles[i] = B.circles[i]
        B.circles[i] = tmp


def init_population(file_name):
    mat,width,height = get_matrix(file_name)
    for i in range(POPULATION_SIZE):
        POPULATION.append(GenoType(height,width,mat));

def clone_population():
    for gene in POPULATION:
        NEW_POPULATION.append(gene.get_clone())

def mutate_population():
    for _ in range(NUM_MUTATIONS):
        i = randint(0,POPULATION_SIZE - 1)
        NEW_POPULATION[i].mutate()

def do_x_over():
    ctr = 0
    one = -1

    for i in range(POPULATION_SIZE):
        if random() < PXOVER:
            ctr+=1
            if ctr%2:
                one = i
            else:
                x_over(NEW_POPULATION[one],NEW_POPULATION[i])


def store_population(just_print=False):
    for i in range(POPULATION_SIZE):
        POPULATION[i].get_fitness()
        if just_print == False:
            POPULATION[i].store(id=i)

def get_unique(p,np):
    x = set()
    for item in p+np:
        x.add(item)
    return [item for item in x]

if __name__ == '__main__':
    x = set()
    init_population("japu.png")
    for gene in POPULATION:
        gene.get_fitness()
    store_population()
    for r_count in range(ROUNDS):
        clone_population()
        do_x_over()
        mutate_population()
        TOTALITY = get_unique(POPULATION,NEW_POPULATION)
        TOTALITY = [gene for gene in sorted(TOTALITY,key = lambda t: t.get_fitness())]
        half = int(POPULATION_SIZE/2)
        POPULATION = TOTALITY[len(TOTALITY) - POPULATION_SIZE : len(TOTALITY)]
        store_population(just_print=True)
        # print("done with round",r_count)
    store_population()
