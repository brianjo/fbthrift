"use strict";(self.webpackChunkwebsite=self.webpackChunkwebsite||[]).push([[209],{3905:(e,t,n)=>{n.r(t),n.d(t,{MDXContext:()=>c,MDXProvider:()=>d,mdx:()=>h,useMDXComponents:()=>u,withMDXComponents:()=>p});var r=n(67294);function i(e,t,n){return t in e?Object.defineProperty(e,t,{value:n,enumerable:!0,configurable:!0,writable:!0}):e[t]=n,e}function o(){return o=Object.assign||function(e){for(var t=1;t<arguments.length;t++){var n=arguments[t];for(var r in n)Object.prototype.hasOwnProperty.call(n,r)&&(e[r]=n[r])}return e},o.apply(this,arguments)}function s(e,t){var n=Object.keys(e);if(Object.getOwnPropertySymbols){var r=Object.getOwnPropertySymbols(e);t&&(r=r.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),n.push.apply(n,r)}return n}function a(e){for(var t=1;t<arguments.length;t++){var n=null!=arguments[t]?arguments[t]:{};t%2?s(Object(n),!0).forEach((function(t){i(e,t,n[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(n)):s(Object(n)).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(n,t))}))}return e}function l(e,t){if(null==e)return{};var n,r,i=function(e,t){if(null==e)return{};var n,r,i={},o=Object.keys(e);for(r=0;r<o.length;r++)n=o[r],t.indexOf(n)>=0||(i[n]=e[n]);return i}(e,t);if(Object.getOwnPropertySymbols){var o=Object.getOwnPropertySymbols(e);for(r=0;r<o.length;r++)n=o[r],t.indexOf(n)>=0||Object.prototype.propertyIsEnumerable.call(e,n)&&(i[n]=e[n])}return i}var c=r.createContext({}),p=function(e){return function(t){var n=u(t.components);return r.createElement(e,o({},t,{components:n}))}},u=function(e){var t=r.useContext(c),n=t;return e&&(n="function"==typeof e?e(t):a(a({},t),e)),n},d=function(e){var t=u(e.components);return r.createElement(c.Provider,{value:t},e.children)},m={inlineCode:"code",wrapper:function(e){var t=e.children;return r.createElement(r.Fragment,{},t)}},f=r.forwardRef((function(e,t){var n=e.components,i=e.mdxType,o=e.originalType,s=e.parentName,c=l(e,["components","mdxType","originalType","parentName"]),p=u(n),d=i,f=p["".concat(s,".").concat(d)]||p[d]||m[d]||o;return n?r.createElement(f,a(a({ref:t},c),{},{components:n})):r.createElement(f,a({ref:t},c))}));function h(e,t){var n=arguments,i=t&&t.mdxType;if("string"==typeof e||i){var o=n.length,s=new Array(o);s[0]=f;var a={};for(var l in t)hasOwnProperty.call(t,l)&&(a[l]=t[l]);a.originalType=e,a.mdxType="string"==typeof e?e:i,s[1]=a;for(var c=2;c<o;c++)s[c]=n[c];return r.createElement.apply(null,s)}return r.createElement.apply(null,n)}f.displayName="MDXCreateElement"},76455:(e,t,n)=>{n.r(t),n.d(t,{assets:()=>l,contentTitle:()=>s,default:()=>u,frontMatter:()=>o,metadata:()=>a,toc:()=>c});var r=n(83117),i=(n(67294),n(3905));const o={},s="Thrift Protocol Structure",a={unversionedId:"internals/protocol-structure",id:"internals/protocol-structure",title:"Thrift Protocol Structure",description:"Last Modified: 2007-Jun-29",source:"@site/../doc/internals/protocol-structure.md",sourceDirName:"internals",slug:"/internals/protocol-structure",permalink:"/docs/internals/protocol-structure",draft:!1,editUrl:"https://github.com/facebook/fbthrift/blob/main/thrift/website/../doc/internals/protocol-structure.md",tags:[],version:"current",frontMatter:{},sidebar:"sidebar",previous:{title:"mstch-based code generators",permalink:"/docs/internals/mstch"},next:{title:"Stream classes",permalink:"/docs/internals/stream-classes"}},l={},c=[],p={toc:c};function u(e){let{components:t,...n}=e;return(0,i.mdx)("wrapper",(0,r.Z)({},p,n,{components:t,mdxType:"MDXLayout"}),(0,i.mdx)("h1",{id:"thrift-protocol-structure"},"Thrift Protocol Structure"),(0,i.mdx)("p",null,"Last Modified: 2007-Jun-29"),(0,i.mdx)("hr",null),(0,i.mdx)("p",null,'Licensed to the Apache Software Foundation (ASF) under one\nor more contributor license agreements. See the NOTICE file\ndistributed with this work for additional information\nregarding copyright ownership. The ASF licenses this file\nto you under the Apache License, Version 2.0 (the\n"License"); you may not use this file except in compliance\nwith the License. You may obtain a copy of the License at'),(0,i.mdx)("p",null,"  ",(0,i.mdx)("a",{parentName:"p",href:"http://www.apache.org/licenses/LICENSE-2.0"},"http://www.apache.org/licenses/LICENSE-2.0")),(0,i.mdx)("p",null,'Unless required by applicable law or agreed to in writing,\nsoftware distributed under the License is distributed on an\n"AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY\nKIND, either express or implied. See the License for the\nspecific language governing permissions and limitations\nunder the License.'),(0,i.mdx)("hr",null),(0,i.mdx)("p",null,'This document describes the structure of the Thrift protocol\nwithout specifying the encoding. Thus, the order of elements\ncould in some cases be rearranged depending upon the TProtocol\nimplementation, but this document specifies the minimum required\nstructure. There are some "dumb" terminals like STRING and INT\nthat take the place of an actual encoding specification.'),(0,i.mdx)("p",null,"They key point to notice is that ALL messages are just one wrapped\n",(0,i.mdx)("inlineCode",{parentName:"p"},"<struct>"),". Depending upon the message type, the ",(0,i.mdx)("inlineCode",{parentName:"p"},"<struct>")," can be\ninterpreted as the argument list to a function, the return value\nof a function, or an exception."),(0,i.mdx)("hr",null),(0,i.mdx)("pre",null,(0,i.mdx)("code",{parentName:"pre"},"       <message> ::= <message-begin> <struct> <message-end>\n\n <message-begin> ::= <method-name> <message-type> <message-seqid>\n\n   <method-name> ::= STRING\n\n  <message-type> ::= T_CALL | T_REPLY | T_EXCEPTION\n\n <message-seqid> ::= I32\n\n        <struct> ::= <struct-begin> <field>* <field-stop> <struct-end>\n\n  <struct-begin> ::= <struct-name>\n\n   <struct-name> ::= STRING\n\n    <field-stop> ::= T_STOP\n\n         <field> ::= <field-begin> <field-data> <field-end>\n\n   <field-begin> ::= <field-name> <field-type> <field-id>\n\n    <field-name> ::= STRING\n\n    <field-type> ::= T_BOOL | T_BYTE | T_I8 | T_I16 | T_I32 | T_I64 | T_DOUBLE\n                     | T_STRING | T_BINARY | T_STRUCT | T_MAP | T_SET | T_LIST\n\n      <field-id> ::= I16\n\n    <field-data> ::= I8 | I16 | I32 | I64 | DOUBLE | STRING | BINARY\n                     <struct> | <map> | <list> | <set>\n\n           <map> ::= <map-begin> <field-datum>* <map-end>\n\n     <map-begin> ::= <map-key-type> <map-value-type> <map-size>\n\n  <map-key-type> ::= <field-type>\n\n<map-value-type> ::= <field-type>\n\n      <map-size> ::= I32\n\n          <list> ::= <list-begin> <field-data>* <list-end>\n\n    <list-begin> ::= <list-elem-type> <list-size>\n\n<list-elem-type> ::= <field-type>\n\n     <list-size> ::= I32\n\n           <set> ::= <set-begin> <field-data>* <set-end>\n\n     <set-begin> ::= <set-elem-type> <set-size>\n\n <set-elem-type> ::= <field-type>\n\n      <set-size> ::= I32\n")))}u.isMDXComponent=!0}}]);