KEY=""
TEXT=""
ACTION=""
CIPHER=""
def global_settings():
	global KEY,TEXT,ACTION,CIPHER
	KEY="3124"
	TEXT="Geeks for Geeks"
	# ACTION="encrypt"
	ACTION="decrypt"
	CIPHER="e  kefGsGsrekoe_"

def get_transpose_key(text_key):
	return [k for (k,c) in sorted(enumerate(text_key),key=lambda x:x[1])]

def encrypt(key,text):
	n = len(text)
	m = len(key)
	transpose = get_transpose_key(key)
	pad_n = n + (2*m - n%m)%m
	text_columns = ["" for _ in range(m)]
	
	for i in range(pad_n):
		text_columns[i%m] += (text[i] if i < n else "_")
	
	cipher = ""
	for col in transpose:
		cipher+=text_columns[col]

	return cipher

def decrypt(key,cipher):
	n = len(cipher)
	m = len(key)
	transpose = get_transpose_key(key)
	chunk_size = int(n/m)
	cols = [cipher[i:i+chunk_size] for i in range(0, n, chunk_size)]
	text = ["" for _ in range(m)]
	for i,col in enumerate(transpose):
		text[col] = cols[i]
	plain_text = ""
	for i in range(n):
		plain_text += text[i%m][int(i/m)]
	return plain_text

def controller():
	global_settings()
	print(ACTION)
	if ACTION == "encrypt":
		print(encrypt(KEY,TEXT))
	else:
		print(decrypt(KEY,CIPHER))

if __name__ == "__main__":
	controller()