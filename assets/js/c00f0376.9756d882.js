"use strict";(self.webpackChunkwebsite=self.webpackChunkwebsite||[]).push([[4899],{3905:(e,t,n)=>{n.r(t),n.d(t,{MDXContext:()=>d,MDXProvider:()=>s,mdx:()=>x,useMDXComponents:()=>c,withMDXComponents:()=>p});var r=n(67294);function i(e,t,n){return t in e?Object.defineProperty(e,t,{value:n,enumerable:!0,configurable:!0,writable:!0}):e[t]=n,e}function a(){return a=Object.assign||function(e){for(var t=1;t<arguments.length;t++){var n=arguments[t];for(var r in n)Object.prototype.hasOwnProperty.call(n,r)&&(e[r]=n[r])}return e},a.apply(this,arguments)}function l(e,t){var n=Object.keys(e);if(Object.getOwnPropertySymbols){var r=Object.getOwnPropertySymbols(e);t&&(r=r.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),n.push.apply(n,r)}return n}function o(e){for(var t=1;t<arguments.length;t++){var n=null!=arguments[t]?arguments[t]:{};t%2?l(Object(n),!0).forEach((function(t){i(e,t,n[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(n)):l(Object(n)).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(n,t))}))}return e}function m(e,t){if(null==e)return{};var n,r,i=function(e,t){if(null==e)return{};var n,r,i={},a=Object.keys(e);for(r=0;r<a.length;r++)n=a[r],t.indexOf(n)>=0||(i[n]=e[n]);return i}(e,t);if(Object.getOwnPropertySymbols){var a=Object.getOwnPropertySymbols(e);for(r=0;r<a.length;r++)n=a[r],t.indexOf(n)>=0||Object.prototype.propertyIsEnumerable.call(e,n)&&(i[n]=e[n])}return i}var d=r.createContext({}),p=function(e){return function(t){var n=c(t.components);return r.createElement(e,a({},t,{components:n}))}},c=function(e){var t=r.useContext(d),n=t;return e&&(n="function"==typeof e?e(t):o(o({},t),e)),n},s=function(e){var t=c(e.components);return r.createElement(d.Provider,{value:t},e.children)},u={inlineCode:"code",wrapper:function(e){var t=e.children;return r.createElement(r.Fragment,{},t)}},f=r.forwardRef((function(e,t){var n=e.components,i=e.mdxType,a=e.originalType,l=e.parentName,d=m(e,["components","mdxType","originalType","parentName"]),p=c(n),s=i,f=p["".concat(l,".").concat(s)]||p[s]||u[s]||a;return n?r.createElement(f,o(o({ref:t},d),{},{components:n})):r.createElement(f,o({ref:t},d))}));function x(e,t){var n=arguments,i=t&&t.mdxType;if("string"==typeof e||i){var a=n.length,l=new Array(a);l[0]=f;var o={};for(var m in t)hasOwnProperty.call(t,m)&&(o[m]=t[m]);o.originalType=e,o.mdxType="string"==typeof e?e:i,l[1]=o;for(var d=2;d<a;d++)l[d]=n[d];return r.createElement.apply(null,l)}return r.createElement.apply(null,n)}f.displayName="MDXCreateElement"},3757:(e,t,n)=>{n.r(t),n.d(t,{assets:()=>m,contentTitle:()=>l,default:()=>c,frontMatter:()=>a,metadata:()=>o,toc:()=>d});var r=n(83117),i=(n(67294),n(3905));const a={state:"experimental"},l="Interface Definition Language (IDL)",o={unversionedId:"spec/idl",id:"spec/idl",title:"Interface Definition Language (IDL)",description:"How to write a Thrift program.",source:"@site/../doc/spec/idl.md",sourceDirName:"spec",slug:"/spec/idl",permalink:"/fbthrift/docs/spec/idl",draft:!1,editUrl:"https://github.com/facebook/fbthrift/blob/main/thrift/website/../doc/spec/idl.md",tags:[],version:"current",frontMatter:{state:"experimental"},sidebar:"sidebar",previous:{title:"Glossary",permalink:"/fbthrift/docs/spec/glossary"},next:{title:"Protocols",permalink:"/fbthrift/docs/spec/protocol/"}},m={},d=[{value:"Style",id:"style",level:2},{value:"Naming",id:"naming",level:3},{value:"Formatting",id:"formatting",level:2},{value:"Linting",id:"linting",level:2},{value:"Grammar",id:"grammar",level:2}],p={toc:d};function c(e){let{components:t,...n}=e;return(0,i.mdx)("wrapper",(0,r.Z)({},p,n,{components:t,mdxType:"MDXLayout"}),(0,i.mdx)("h1",{id:"interface-definition-language-idl"},"Interface Definition Language (IDL)"),(0,i.mdx)("p",null,"How to write a Thrift program."),(0,i.mdx)("h2",{id:"style"},"Style"),(0,i.mdx)("p",null,"The following naming style ",(0,i.mdx)("strong",{parentName:"p"},"should")," be used in all Thrift IDL files for consistency and clarity."),(0,i.mdx)("h3",{id:"naming"},"Naming"),(0,i.mdx)("p",null,"Use snake-case for file names, as they function like 'module' names when included in other thrift files, for example: ",(0,i.mdx)("inlineCode",{parentName:"p"},"standard.thrift"),", ",(0,i.mdx)("inlineCode",{parentName:"p"},"security_domain.thrift.")),(0,i.mdx)("p",null,"Use upper-camel-case (a.k.a. PascalCase) for ",(0,i.mdx)("a",{parentName:"p",href:"/fbthrift/docs/spec/definition/"},"definitions"),"."),(0,i.mdx)("ul",null,(0,i.mdx)("li",{parentName:"ul"},(0,i.mdx)("inlineCode",{parentName:"li"},"struct MyStruct { ... }"),", not ",(0,i.mdx)("inlineCode",{parentName:"li"},"myStruct")),(0,i.mdx)("li",{parentName:"ul"},(0,i.mdx)("inlineCode",{parentName:"li"},"typedef int MyInt"),", not ",(0,i.mdx)("inlineCode",{parentName:"li"},"my_int"))),(0,i.mdx)("p",null,"Use lower-camel-case for identifiers, including consts."),(0,i.mdx)("ul",null,(0,i.mdx)("li",{parentName:"ul"},(0,i.mdx)("inlineCode",{parentName:"li"},"1: string tierName"),", not ",(0,i.mdx)("inlineCode",{parentName:"li"},"tier_name")),(0,i.mdx)("li",{parentName:"ul"},(0,i.mdx)("inlineCode",{parentName:"li"},"const i64 minId = 1"),", not ",(0,i.mdx)("inlineCode",{parentName:"li"},"kMinID"))),(0,i.mdx)("p",null,"Don\u2019t capitalize acronyms; they follow the same camel-case rules."),(0,i.mdx)("ul",null,(0,i.mdx)("li",{parentName:"ul"},(0,i.mdx)("inlineCode",{parentName:"li"},"serviceId"),", not ",(0,i.mdx)("inlineCode",{parentName:"li"},"serviceID")),(0,i.mdx)("li",{parentName:"ul"},(0,i.mdx)("inlineCode",{parentName:"li"},"service HttpServer { ... }"),", not ",(0,i.mdx)("inlineCode",{parentName:"li"},"HTTPServer"))),(0,i.mdx)("p",null,"Use types to endow values with semantics."),(0,i.mdx)("ul",null,(0,i.mdx)("li",{parentName:"ul"},(0,i.mdx)("a",{parentName:"li",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/type.thrift#Duration"},(0,i.mdx)("inlineCode",{parentName:"a"},"type.Duration"))," ",(0,i.mdx)("inlineCode",{parentName:"li"},"timeout"),", not ",(0,i.mdx)("inlineCode",{parentName:"li"},"i64 timeout")),(0,i.mdx)("li",{parentName:"ul"},(0,i.mdx)("a",{parentName:"li",href:"https://github.com/facebook/fbthrift/tree/main/thrift/lib/thrift/type.thrift#Timestamp"},(0,i.mdx)("inlineCode",{parentName:"a"},"type.Timestamp")),"  ",(0,i.mdx)("inlineCode",{parentName:"li"},"createTime"),", not ",(0,i.mdx)("inlineCode",{parentName:"li"},"i64 timestamp"),".")),(0,i.mdx)("p",null,"When types are impractical for dimensional values, include units, for example ",(0,i.mdx)("inlineCode",{parentName:"p"},"ttlMs")," instead of ",(0,i.mdx)("inlineCode",{parentName:"p"},"ttl"),"."),(0,i.mdx)("h2",{id:"formatting"},"Formatting"),(0,i.mdx)("p",null,"How to have pretty IDL files."),(0,i.mdx)("h2",{id:"linting"},"Linting"),(0,i.mdx)("p",null,"How to have tidy IDL files."),(0,i.mdx)("h2",{id:"grammar"},"Grammar"),(0,i.mdx)("p",null,"The full IDL grammar."))}c.isMDXComponent=!0}}]);