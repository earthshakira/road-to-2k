(window.webpackJsonp=window.webpackJsonp||[]).push([[8],{S1Ak:function(e,t,a){},"xxD/":function(e,t,a){"use strict";a("xfY5"),a("KKXr"),a("2Spj"),a("rGqo"),a("8+KV");var n=a("lwsE"),i=a.n(n),r=a("W8MJ"),l=a.n(r),s=a("a1gu"),c=a.n(s),o=a("Nsbk"),m=a.n(o),p=a("PJYZ"),u=a.n(p),g=a("7W2i"),h=a.n(g),k=a("pVnL"),d=a.n(k),f=a("MVZn"),P=a.n(f),v=a("lSNA"),E=a.n(v),N=a("cDcd"),b=(a("17x9"),a("MGin")),C=a("TSYQ"),x=a.n(C),y=a("eOGF"),L=(a("S1Ak"),function(e){function t(){var e,a;i()(this,t);for(var n=arguments.length,r=new Array(n),l=0;l<n;l++)r[l]=arguments[l];return a=c()(this,(e=m()(t)).call.apply(e,[this].concat(r))),E()(u()(a),"handleClick",function(e,t){a.props.currentPage===e&&t.preventDefault()}),E()(u()(a),"getQuery",function(e,t){var n=a.props,i=n.removeQueries,r=n.addQueries,l=P()({},e.query);return i.forEach(function(e){delete l[e]}),P()({},l,{page:t},r)}),E()(u()(a),"getLinkAttributes",function(e,t){var n,i=a.props,r=i.currentPage,l=i.pageOnQuery,s=i.nonUrlPages,c=(i.removeQueries,i.addQueries,a.getPath());return n=s?void 0:l?function(t){return P()({},t,{query:a.getQuery(t,e)})}:function(t){return P()({},t,{pathname:c+"/"+e})},{"data-analytics":"Pagination","data-attr1":t,"data-attr8":e,"data-attr7":r,onClick:a.handleClick.bind(u()(a),e),to:n}}),E()(u()(a),"onPageChange",function(e){e!==a.props.currentPage&&a.props.onPageChange(e)}),a}return h()(t,e),l()(t,[{key:"getPath",value:function(){var e=this.props.pageOnQuery,t=this.context.location.pathname;if(e)return t;var a=t.split("/");return Number(a[a.length-1])&&a.pop(),a.join("/")}},{key:"renderMetaInfo",value:function(e,t,a,n){var i=this.context.location,r=this.getLinkAttributes,l=r(a,"Left").to(i),s=Object(y.b)(l.pathname,l.query),c=r(n,"Right").to(i),o=Object(y.b)(c.pathname,c.query);return N.createElement("div",null,!e&&N.createElement("link",{rel:"prev",href:s}),!t&&N.createElement("link",{rel:"next",href:o}))}},{key:"renderEllipsis",value:function(){return N.createElement("li",{className:x()("page-item page-ellipsis")},N.createElement(b.Link,{className:"page-link"},"..."))}},{key:"render",value:function(){var e=this.props,t=this.getLinkAttributes,a=(this.onPageChange,e.totalItems),n=e.itemPerPage,i=e.maxPageCount,r=e.textControls,l=e.theme,s=e.nonUrlPages,c=Number(e.currentPage),o=Math.ceil(a/n),m=1===c,p=c===o,u=Math.max(1,c-1),g=Math.min(o,c+1),h=Math.max(2,Math.ceil(c-i/2));c>o-i&&(h=Math.max(2,o-i)),o<i&&(h=2);var k=[],f=Math.min(i+h,o);1===i&&2===c&&f!==o&&(f+=1),1===i&&c===o-1&&2!==h&&(h-=1);for(var P=h-1>1,v=o-(f-1)>1,E=h;E<f;E++)k.push(N.createElement("li",{key:E,className:x()("page-item number",{active:E===c,"first-item":E===h,"last-item":E===f})},N.createElement(b.Link,d()({className:"page-link"},t(E,"Page"),{onClick:this.onPageChange.bind(this,E)}),E)));return N.createElement("div",{className:x()("ui-pagination",l,this.props.className)},N.createElement("ul",null,N.createElement("li",{className:x()("page-item prev-page",{disabled:m})},N.createElement(b.Link,d()({className:"prev-page-link page-link"},t(u,"Left"),{onClick:this.onPageChange.bind(this,u)}),r?N.createElement("span",{className:"text-control"},"Prev"):N.createElement("span",{className:"icon ui-icon-arrow-left"}))),N.createElement("li",{className:x()("page-item first-page",{active:1===c,"first-item":1===h})},N.createElement(b.Link,d()({className:"page-link"},t(1,"Page"),{onClick:this.onPageChange.bind(this,1)}),1)),P&&this.renderEllipsis(),k,v&&this.renderEllipsis(),o>1&&N.createElement("li",{key:o,className:x()("page-item last-page",{active:o===c})},N.createElement(b.Link,d()({className:"page-link"},t(o,"Page"),{onClick:this.onPageChange.bind(this,o)}),o)),N.createElement("li",{className:x()("page-item next-page",{disabled:p})},N.createElement(b.Link,d()({className:"last-page-link page-link"},t(g,"Right"),{onClick:this.onPageChange.bind(this,g)}),r?N.createElement("span",{className:"text-control"},"Next"):N.createElement("span",{className:"icon ui-icon-arrow-right"})))),!s&&this.renderMetaInfo(m,p,u,g))}}]),t}(N.Component));E()(L,"contextTypes",{location:Object}),E()(L,"defaultProps",{itemPerPage:20,currentPage:1,maxPageCount:5,theme:"new",addQueries:{},removeQueries:[],onPageChange:function(){}}),t.a=L}}]);
//# sourceMappingURL=https://staging.hackerrank.net/fcore-assets/sourcemaps/hackerrank_r_modules~work~contest~challenge~leaderboardv2~leaderboard-adb79301.js.map