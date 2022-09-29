"use strict";(self.webpackChunkwebsite=self.webpackChunkwebsite||[]).push([[9078],{3905:(e,t,a)=>{a.r(t),a.d(t,{MDXContext:()=>p,MDXProvider:()=>u,mdx:()=>c,useMDXComponents:()=>s,withMDXComponents:()=>o});var n=a(67294);function r(e,t,a){return t in e?Object.defineProperty(e,t,{value:a,enumerable:!0,configurable:!0,writable:!0}):e[t]=a,e}function i(){return i=Object.assign||function(e){for(var t=1;t<arguments.length;t++){var a=arguments[t];for(var n in a)Object.prototype.hasOwnProperty.call(a,n)&&(e[n]=a[n])}return e},i.apply(this,arguments)}function d(e,t){var a=Object.keys(e);if(Object.getOwnPropertySymbols){var n=Object.getOwnPropertySymbols(e);t&&(n=n.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),a.push.apply(a,n)}return a}function m(e){for(var t=1;t<arguments.length;t++){var a=null!=arguments[t]?arguments[t]:{};t%2?d(Object(a),!0).forEach((function(t){r(e,t,a[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(a)):d(Object(a)).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(a,t))}))}return e}function l(e,t){if(null==e)return{};var a,n,r=function(e,t){if(null==e)return{};var a,n,r={},i=Object.keys(e);for(n=0;n<i.length;n++)a=i[n],t.indexOf(a)>=0||(r[a]=e[a]);return r}(e,t);if(Object.getOwnPropertySymbols){var i=Object.getOwnPropertySymbols(e);for(n=0;n<i.length;n++)a=i[n],t.indexOf(a)>=0||Object.prototype.propertyIsEnumerable.call(e,a)&&(r[a]=e[a])}return r}var p=n.createContext({}),o=function(e){return function(t){var a=s(t.components);return n.createElement(e,i({},t,{components:a}))}},s=function(e){var t=n.useContext(p),a=t;return e&&(a="function"==typeof e?e(t):m(m({},t),e)),a},u=function(e){var t=s(e.components);return n.createElement(p.Provider,{value:t},e.children)},x={inlineCode:"code",wrapper:function(e){var t=e.children;return n.createElement(n.Fragment,{},t)}},f=n.forwardRef((function(e,t){var a=e.components,r=e.mdxType,i=e.originalType,d=e.parentName,p=l(e,["components","mdxType","originalType","parentName"]),o=s(a),u=r,f=o["".concat(d,".").concat(u)]||o[u]||x[u]||i;return a?n.createElement(f,m(m({ref:t},p),{},{components:a})):n.createElement(f,m({ref:t},p))}));function c(e,t){var a=arguments,r=t&&t.mdxType;if("string"==typeof e||r){var i=a.length,d=new Array(i);d[0]=f;var m={};for(var l in t)hasOwnProperty.call(t,l)&&(m[l]=t[l]);m.originalType=e,m.mdxType="string"==typeof e?e:r,d[1]=m;for(var p=2;p<i;p++)d[p]=a[p];return n.createElement.apply(null,d)}return n.createElement.apply(null,a)}f.displayName="MDXCreateElement"},94599:(e,t,a)=>{a.r(t),a.d(t,{assets:()=>l,contentTitle:()=>d,default:()=>s,frontMatter:()=>i,metadata:()=>m,toc:()=>p});var n=a(83117),r=(a(67294),a(3905));const i={state:"beta"},d="Data Types",m={unversionedId:"spec/definition/data",id:"spec/definition/data",title:"Data Types",description:"Types that can be (de)serialized using data protocols.",source:"@site/../doc/spec/definition/data.md",sourceDirName:"spec/definition",slug:"/spec/definition/data",permalink:"/fbthrift/docs/spec/definition/data",draft:!1,editUrl:"https://github.com/facebook/fbthrift/blob/main/thrift/website/../doc/spec/definition/data.md",tags:[],version:"current",frontMatter:{state:"beta"},sidebar:"sidebar",previous:{title:"Compatibility",permalink:"/fbthrift/docs/spec/definition/compatibility"},next:{title:"Errors and Exceptions",permalink:"/fbthrift/docs/spec/definition/exception"}},l={},p=[{value:"Categories",id:"categories",level:2},{value:"Primitive Types",id:"primitive-types",level:2},{value:"Enum",id:"enum",level:3},{value:"Floating Point",id:"floating-point",level:3},{value:"UTF-8 String",id:"utf-8-string",level:3},{value:"Primitive Operators",id:"primitive-operators",level:2},{value:"identical",id:"identical",level:3},{value:"equal",id:"equal",level:3},{value:"empty",id:"empty",level:3},{value:"hash",id:"hash",level:3},{value:"Container Types",id:"container-types",level:2},{value:"Container Operators",id:"container-operators",level:2},{value:"Structured Types",id:"structured-types",level:2},{value:"Structured Operators",id:"structured-operators",level:2},{value:"Standard Data Types",id:"standard-data-types",level:2}],o={toc:p};function s(e){let{components:t,...a}=e;return(0,r.mdx)("wrapper",(0,n.Z)({},o,a,{components:t,mdxType:"MDXLayout"}),(0,r.mdx)("h1",{id:"data-types"},"Data Types"),(0,r.mdx)("p",null,"Types that can be (de)serialized using ",(0,r.mdx)("a",{parentName:"p",href:"/fbthrift/docs/spec/protocol/data"},"data protocols"),"."),(0,r.mdx)("p",null,"See also ",(0,r.mdx)("a",{parentName:"p",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/schema.thrift"},"schema.thrift"),"."),(0,r.mdx)("h2",{id:"categories"},"Categories"),(0,r.mdx)("p",null,"Shorthand names used for specific groups of types:"),(0,r.mdx)("table",null,(0,r.mdx)("thead",{parentName:"table"},(0,r.mdx)("tr",{parentName:"thead"},(0,r.mdx)("th",{parentName:"tr",align:null},"Category"),(0,r.mdx)("th",{parentName:"tr",align:null},"Types"))),(0,r.mdx)("tbody",{parentName:"table"},(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"#primitive-types"},(0,r.mdx)("em",{parentName:"a"},"integer"))),(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"bool"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"byte"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"i16"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"i32"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"i64"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"enum"))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"#floating-point"},(0,r.mdx)("em",{parentName:"a"},"floating point"))),(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"double"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"float"))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"#primitive-types"},(0,r.mdx)("em",{parentName:"a"},"number"))),(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("em",{parentName:"td"},"integer"),", ",(0,r.mdx)("em",{parentName:"td"},"floating point"))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"#primitive-types"},(0,r.mdx)("em",{parentName:"a"},"primitive"))),(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("em",{parentName:"td"},"number"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"string"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"binary"))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"#structured-types"},(0,r.mdx)("inlineCode",{parentName:"a"},"struct"))),(0,r.mdx)("td",{parentName:"tr",align:null},"any ",(0,r.mdx)("inlineCode",{parentName:"td"},"struct")," type")),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"#structured-types"},(0,r.mdx)("inlineCode",{parentName:"a"},"union"))),(0,r.mdx)("td",{parentName:"tr",align:null},"any ",(0,r.mdx)("inlineCode",{parentName:"td"},"union")," type")),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"#structured-types"},(0,r.mdx)("inlineCode",{parentName:"a"},"exception"))),(0,r.mdx)("td",{parentName:"tr",align:null},"any ",(0,r.mdx)("inlineCode",{parentName:"td"},"exception")," type")),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"#structured-types"},(0,r.mdx)("em",{parentName:"a"},"structured"))),(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"struct"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"union"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"exception"))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"#container-types"},(0,r.mdx)("em",{parentName:"a"},"container"))),(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"map"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"list"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"set"))))),(0,r.mdx)("h2",{id:"primitive-types"},"Primitive Types"),(0,r.mdx)("p",null,"The basic types supported by Thrift."),(0,r.mdx)("table",null,(0,r.mdx)("thead",{parentName:"table"},(0,r.mdx)("tr",{parentName:"thead"},(0,r.mdx)("th",{parentName:"tr",align:null},"Type"),(0,r.mdx)("th",{parentName:"tr",align:null},"Definition"))),(0,r.mdx)("tbody",{parentName:"table"},(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"bool")),(0,r.mdx)("td",{parentName:"tr",align:null},"True(1) or False(0)")),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"byte")),(0,r.mdx)("td",{parentName:"tr",align:null},"8-bit signed integer",(0,r.mdx)("sup",{parentName:"td",id:"fnref-1"},(0,r.mdx)("a",{parentName:"sup",href:"#fn-1",className:"footnote-ref"},"1")))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"i16")),(0,r.mdx)("td",{parentName:"tr",align:null},"16-bit signed integer",(0,r.mdx)("sup",{parentName:"td",id:"fnref-1"},(0,r.mdx)("a",{parentName:"sup",href:"#fn-1",className:"footnote-ref"},"1")))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"i32"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"enum")),(0,r.mdx)("td",{parentName:"tr",align:null},"32-bit signed integer",(0,r.mdx)("sup",{parentName:"td",id:"fnref-1"},(0,r.mdx)("a",{parentName:"sup",href:"#fn-1",className:"footnote-ref"},"1")))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"i64")),(0,r.mdx)("td",{parentName:"tr",align:null},"64-bit signed integer",(0,r.mdx)("sup",{parentName:"td",id:"fnref-1"},(0,r.mdx)("a",{parentName:"sup",href:"#fn-1",className:"footnote-ref"},"1")))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"float")),(0,r.mdx)("td",{parentName:"tr",align:null},"32-bit floating point",(0,r.mdx)("sup",{parentName:"td",id:"fnref-2"},(0,r.mdx)("a",{parentName:"sup",href:"#fn-2",className:"footnote-ref"},"2")))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"double")),(0,r.mdx)("td",{parentName:"tr",align:null},"64-bit floating point",(0,r.mdx)("sup",{parentName:"td",id:"fnref-2"},(0,r.mdx)("a",{parentName:"sup",href:"#fn-2",className:"footnote-ref"},"2")))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"string")),(0,r.mdx)("td",{parentName:"tr",align:null},"UTF-8 encoded string",(0,r.mdx)("sup",{parentName:"td",id:"fnref-3"},(0,r.mdx)("a",{parentName:"sup",href:"#fn-3",className:"footnote-ref"},"3")))),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"binary")),(0,r.mdx)("td",{parentName:"tr",align:null},"Arbitrary byte string")))),(0,r.mdx)("p",null,"Each primitive type defines an intrinsic default:"),(0,r.mdx)("ul",null,(0,r.mdx)("li",{parentName:"ul"},"numbers \u2192 0"),(0,r.mdx)("li",{parentName:"ul"},"string, binary \u2192 \u201c\u201d")),(0,r.mdx)("h3",{id:"enum"},"Enum"),(0,r.mdx)("p",null,"Enums are ",(0,r.mdx)("inlineCode",{parentName:"p"},"i32")," with named values. Enums ",(0,r.mdx)("em",{parentName:"p"},"can")," represent unnamed values. In \u2018open\u2019 enum languages, like C++, this is natively supported. For \u2018closed\u2019 enum languages, like Java, special care ",(0,r.mdx)("strong",{parentName:"p"},"must")," be taken to allow any value to be read or written to an enum field, even if the value has no name (or the name is not known). Such languages ",(0,r.mdx)("strong",{parentName:"p"},"should")," add:"),(0,r.mdx)("ul",null,(0,r.mdx)("li",{parentName:"ul"},"an explicit ",(0,r.mdx)("inlineCode",{parentName:"li"},"Unrecognized")," enum value, which is returned for any unnamed value; and,"),(0,r.mdx)("li",{parentName:"ul"},"auxiliary methods for get/setting the underlying i32 value.")),(0,r.mdx)("p",null,"If no name is declared for the default/0 value, Thrift uses ",(0,r.mdx)("inlineCode",{parentName:"p"},"Unspecified"),"."),(0,r.mdx)("h3",{id:"floating-point"},"Floating Point"),(0,r.mdx)("p",null,"Thrift considers all ",(0,r.mdx)("inlineCode",{parentName:"p"},"NaN")," values to be identical, so custom NaN values ",(0,r.mdx)("strong",{parentName:"p"},"should")," be normalized. Additionally, like most programming languages, it is undefined behavior (UB) to have a ",(0,r.mdx)("inlineCode",{parentName:"p"},"NaN")," value in a set or map \u2018key\u2019 value (even transitively)."),(0,r.mdx)("h3",{id:"utf-8-string"},"UTF-8 String"),(0,r.mdx)("p",null,"While a Thrift ",(0,r.mdx)("inlineCode",{parentName:"p"},"string")," ",(0,r.mdx)("strong",{parentName:"p"},"must")," always be valid UTF-8, it is treated is identically to ",(0,r.mdx)("inlineCode",{parentName:"p"},"binary"),", ignoring all unicode defined semantics, including  which code points are currently defined in the unicode standard. Any well formed unicode encoded code point ",(0,r.mdx)("strong",{parentName:"p"},"may")," be present."),(0,r.mdx)("h2",{id:"primitive-operators"},"Primitive Operators"),(0,r.mdx)("h3",{id:"identical"},"identical"),(0,r.mdx)("p",null,"Primitive values are ",(0,r.mdx)("strong",{parentName:"p"},"identical"),", if their logical representations are identical. This produces the same results as ",(0,r.mdx)("strong",{parentName:"p"},"equal")," in all cases except floating point, which has two exceptions:"),(0,r.mdx)("pre",null,(0,r.mdx)("code",{parentName:"pre"},"identical(NaN, NaN) == true\nidentical(-0.0, 0.0) == false\n")),(0,r.mdx)("h3",{id:"equal"},"equal"),(0,r.mdx)("p",null,"Same-type equality follows the semantic rules defined by that type\u2019s specification. This produces the same results as ",(0,r.mdx)("strong",{parentName:"p"},"identical")," in all cases except floating point, which has two exceptions:"),(0,r.mdx)("pre",null,(0,r.mdx)("code",{parentName:"pre"},"equal(NaN, NaN) == false\nequal(-0.0, 0.0) == true\n")),(0,r.mdx)("p",null,"Additionally, values of different numeric types can be tested for equality, in which case they are considered ",(0,r.mdx)("strong",{parentName:"p"},"equal")," if they semantically represent equivalent numbers:"),(0,r.mdx)("pre",null,(0,r.mdx)("code",{parentName:"pre"},"equal(2.0, 2.0f) == equal(2.0f, 2) == true\nequal(-0.0, 0.0f) == equal(-0.0f, 0) == true\n")),(0,r.mdx)("p",null,(0,r.mdx)("strong",{parentName:"p"},"equal")," between other primitive types is ill-defined, and not supported."),(0,r.mdx)("h3",{id:"empty"},"empty"),(0,r.mdx)("p",null,"A primitive value is considered ",(0,r.mdx)("strong",{parentName:"p"},"empty")," if it is ",(0,r.mdx)("strong",{parentName:"p"},"identical")," to its intrinsic default."),(0,r.mdx)("h3",{id:"hash"},"hash"),(0,r.mdx)("p",null,"A given hash function ",(0,r.mdx)("strong",{parentName:"p"},"must")," be able to hash all primitive types directly. All numeric types ",(0,r.mdx)("strong",{parentName:"p"},"must")," produce the same hash for ",(0,r.mdx)("strong",{parentName:"p"},"equal")," values:"),(0,r.mdx)("pre",null,(0,r.mdx)("code",{parentName:"pre"},"hash(2.0) == hash(2.0f) == hash(2)\nhash(-0.0) == hash(0.0f) == hash(0)\n")),(0,r.mdx)("h2",{id:"container-types"},"Container Types"),(0,r.mdx)("table",null,(0,r.mdx)("thead",{parentName:"table"},(0,r.mdx)("tr",{parentName:"thead"},(0,r.mdx)("th",{parentName:"tr",align:null},"Type"),(0,r.mdx)("th",{parentName:"tr",align:null},"Definition"))),(0,r.mdx)("tbody",{parentName:"table"},(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"list<{type}>")),(0,r.mdx)("td",{parentName:"tr",align:null},"Ordered container of ",(0,r.mdx)("inlineCode",{parentName:"td"},"{type}")," values.")),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"set<{type}>")),(0,r.mdx)("td",{parentName:"tr",align:null},"Unordered container of unique ",(0,r.mdx)("inlineCode",{parentName:"td"},"{type}")," values.")),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"map<{key}, {value}>")),(0,r.mdx)("td",{parentName:"tr",align:null},"Unordered container of (",(0,r.mdx)("inlineCode",{parentName:"td"},"{key}"),", ",(0,r.mdx)("inlineCode",{parentName:"td"},"{value}"),") pairs, where all ",(0,r.mdx)("inlineCode",{parentName:"td"},"{key}"),"\u2018s are unique.")))),(0,r.mdx)("p",null,"Set and map keys can be any Thrift type; however, storing ",(0,r.mdx)("inlineCode",{parentName:"p"},"NaN")," in a key value is not supported and leads to implementation-specific UB (as ",(0,r.mdx)("inlineCode",{parentName:"p"},"NaN")," is not ",(0,r.mdx)("strong",{parentName:"p"},"equal")," to itself, so it can never be \u2018found\u2019)."),(0,r.mdx)("h2",{id:"container-operators"},"Container Operators"),(0,r.mdx)("p",null,"All container operators are defined based on values they contain:"),(0,r.mdx)("ul",null,(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("strong",{parentName:"li"},"identical")," - Two containers are ",(0,r.mdx)("strong",{parentName:"li"},"identical")," if they contain pairwise ",(0,r.mdx)("strong",{parentName:"li"},"identical")," elements. For list, the elements must also be in the same order."),(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("strong",{parentName:"li"},"equal")," - Two containers are ",(0,r.mdx)("strong",{parentName:"li"},"equal")," if they contain pairwise ",(0,r.mdx)("strong",{parentName:"li"},"equal")," elements. For list, the elements must also be in the same order."),(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("strong",{parentName:"li"},"empty")," - A container is ",(0,r.mdx)("strong",{parentName:"li"},"empty")," if it contains no elements."),(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("strong",{parentName:"li"},"hash")," - Unordered accumulation, for set and map, and ordered accumulation for list and map key-value pairs, of hashes of all contained elements.")),(0,r.mdx)("h2",{id:"structured-types"},"Structured Types"),(0,r.mdx)("table",null,(0,r.mdx)("thead",{parentName:"table"},(0,r.mdx)("tr",{parentName:"thead"},(0,r.mdx)("th",{parentName:"tr",align:null},"Type"),(0,r.mdx)("th",{parentName:"tr",align:null},"Definition"))),(0,r.mdx)("tbody",{parentName:"table"},(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("a",{parentName:"td",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/schema.thrift#Field"},"field")),(0,r.mdx)("td",{parentName:"tr",align:null},"a (id, value) pair.")),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"struct")),(0,r.mdx)("td",{parentName:"tr",align:null},"Unordered container of fields. Both field names and ids are unique.")),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"exception")),(0,r.mdx)("td",{parentName:"tr",align:null},"Same as ",(0,r.mdx)("inlineCode",{parentName:"td"},"struct"),", except can be thrown.")),(0,r.mdx)("tr",{parentName:"tbody"},(0,r.mdx)("td",{parentName:"tr",align:null},(0,r.mdx)("inlineCode",{parentName:"td"},"union")),(0,r.mdx)("td",{parentName:"tr",align:null},"Similar to ",(0,r.mdx)("inlineCode",{parentName:"td"},"struct"),", except at most 1 field can be set.")))),(0,r.mdx)("p",null,"Structured types have both a 'custom' and 'intrinsic' default value, where the 'intrinsic' default of the structure type ignores all ",(0,r.mdx)("a",{parentName:"p",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/schema.thrift#Field"},"field")," custom default values."),(0,r.mdx)("p",null,(0,r.mdx)("a",{parentName:"p",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/schema.thrift#Field.customDefault"},"Custom defaults")," are ",(0,r.mdx)("strong",{parentName:"p"},"only")," used when constructing a new structured value, accessing the 'default' of a structured type, or parsing a field with ",(0,r.mdx)("a",{parentName:"p",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/schema.thrift#FieldQualifier.Fill"},(0,r.mdx)("inlineCode",{parentName:"a"},"Fill"))," semantics (the default pre-v1). They are ignored in all other contexts. For example, if a structured value is 'cleared', all of its fields are set to their intrinsic defaults, ignoring all specified custom defaults."),(0,r.mdx)("h2",{id:"structured-operators"},"Structured Operators"),(0,r.mdx)("p",null,"Thrift only considers a ",(0,r.mdx)("a",{parentName:"p",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/schema.thrift#Field"},"field"),"'s ",(0,r.mdx)("inlineCode",{parentName:"p"},"id")," and ",(0,r.mdx)("inlineCode",{parentName:"p"},"value")," in operators. Similar to ",(0,r.mdx)("inlineCode",{parentName:"p"},"map")," operators, structured operators are defined recursively based on the (id, value) pairs of the fields the structured value 'contains':"),(0,r.mdx)("ul",null,(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("strong",{parentName:"li"},"identical")," - Two structured values are ",(0,r.mdx)("strong",{parentName:"li"},"identical")," if they contain pairwise ",(0,r.mdx)("strong",{parentName:"li"},"identical")," field (id, value) pairs."),(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("strong",{parentName:"li"},"equal")," - Two structured values are ",(0,r.mdx)("strong",{parentName:"li"},"equal")," if they contain pairwise ",(0,r.mdx)("strong",{parentName:"li"},"equal")," field (id, value) pairs."),(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("strong",{parentName:"li"},"empty")," - A structured value is ",(0,r.mdx)("strong",{parentName:"li"},"empty")," if all of its fields are ",(0,r.mdx)("strong",{parentName:"li"},"empty"),"."),(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("strong",{parentName:"li"},"hash")," - Unordered accumulation of, the ordered accumulation of, all non-",(0,r.mdx)("strong",{parentName:"li"},"empty")," field (id, value) pair hashes.")),(0,r.mdx)("p",null,"A field is ",(0,r.mdx)("strong",{parentName:"p"},"empty")," if:"),(0,r.mdx)("ul",null,(0,r.mdx)("li",{parentName:"ul"},"it is an ",(0,r.mdx)("a",{parentName:"li",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/schema.thrift#FieldQualifier.Optional"},(0,r.mdx)("inlineCode",{parentName:"a"},"Optional"))," or ",(0,r.mdx)("inlineCode",{parentName:"li"},"union")," field, and the value is 'unset'; or,"),(0,r.mdx)("li",{parentName:"ul"},"it is a ",(0,r.mdx)("a",{parentName:"li",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/schema.thrift#FieldQualifier.Terse"},(0,r.mdx)("inlineCode",{parentName:"a"},"Terse"))," field, and the value is ",(0,r.mdx)("strong",{parentName:"li"},"empty"),".")),(0,r.mdx)("p",null,"When a field is ",(0,r.mdx)("strong",{parentName:"p"},"empty"),", no data is written for it; otherwise, the ",(0,r.mdx)("inlineCode",{parentName:"p"},"id")," and value are written. When all fields are ",(0,r.mdx)("strong",{parentName:"p"},"empty"),", no data is written when serializing the structured value."),(0,r.mdx)("p",null,(0,r.mdx)("strong",{parentName:"p"},"Note")," that, a structured type with a ",(0,r.mdx)("a",{parentName:"p",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/schema.thrift#FieldQualifier.Fill"},(0,r.mdx)("inlineCode",{parentName:"a"},"Fill"))," field (the default before v1), cannot represent an ",(0,r.mdx)("strong",{parentName:"p"},"empty")," value, and will ",(0,r.mdx)("strong",{parentName:"p"},"always")," output data when serialized."),(0,r.mdx)("h2",{id:"standard-data-types"},"Standard Data Types"),(0,r.mdx)("p",null,"Types provided by Thrift:"),(0,r.mdx)("ul",null,(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("a",{parentName:"li",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/type.thrift"},"type.thrift")),(0,r.mdx)("li",{parentName:"ul"},(0,r.mdx)("a",{parentName:"li",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/standard.thrift"},"standard.thrift"))),(0,r.mdx)("div",{className:"footnotes"},(0,r.mdx)("hr",{parentName:"div"}),(0,r.mdx)("ol",{parentName:"div"},(0,r.mdx)("li",{parentName:"ol",id:"fn-3"},(0,r.mdx)("a",{parentName:"li",href:"https://en.wikipedia.org/wiki/UTF-8"},"UTF-8 encoding"),(0,r.mdx)("a",{parentName:"li",href:"#fnref-3",className:"footnote-backref"},"\u21a9")),(0,r.mdx)("li",{parentName:"ol",id:"fn-2"},(0,r.mdx)("a",{parentName:"li",href:"https://en.wikipedia.org/wiki/IEEE_754"},"IEEE-754"),(0,r.mdx)("a",{parentName:"li",href:"#fnref-2",className:"footnote-backref"},"\u21a9")),(0,r.mdx)("li",{parentName:"ol",id:"fn-1"},(0,r.mdx)("a",{parentName:"li",href:"https://en.wikipedia.org/wiki/Two%27s_complement"},"two's complement"),(0,r.mdx)("a",{parentName:"li",href:"#fnref-1",className:"footnote-backref"},"\u21a9")))))}s.isMDXComponent=!0}}]);