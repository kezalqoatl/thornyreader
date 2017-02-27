#include "docformats.h"

const char* CRCSS_RTF = R"delimiter(

body, p {
  /* def.all */
  text-align: justify;
  text-indent: 1.2em;
  margin-top: 0em;
  margin-bottom: 0em;
  margin-left: 0em;
  margin-right: 0em;
}
.empty-line, empty-line {
  height: 1em;
}

hr {
  height: 1px;
  background-color: #808080;
  margin-top: 0.5em;
  margin-bottom: 0.5em;
}

sub {
  vertical-align: sub;
  font-size: 70%;
}

sup {
  vertical-align: super;
  font-size: 70%;
}

strong, b {
  font-weight: bold;
}

emphasis, i {
  font-style: italic;
}

a {
  text-decoration: underline;
}

a[type="note"] {
  vertical-align: super;
  font-size: 70%;
  text-decoration: none;
}

image {
  text-align: center;
  text-indent: 0px;
}

p image {
  display: inline;
}

v {
  text-align: left;
  text-indent: 0px;
}

stanza + stanza {
  margin-top: 1em;
}

stanza {
  margin-left: 30%;
  text-align: left;
  font-style: italic;
}

poem {
  margin-top: 1em;
  margin-bottom: 1em;
  text-indent: 0px;
}

text-author {
  font-weight: bold;
  font-style: italic;
  margin-left: 5%;
}

epigraph {
  margin-left: 25%;
  margin-right: 1em;
  text-align: left;
  text-indent: 1px;
  font-style: italic;
  margin-top: 15px;
  margin-bottom: 25px;
}

cite {
  font-style: italic;
  margin-left: 5%;
  margin-right: 5%;
  text-align: justyfy;
  margin-top: 20px;
  margin-bottom: 20px;
}

h1 {
  font-size: 150%;
}

h2 {
  font-size: 140%;
}

h3 {
  font-size: 130%;
}

h4 {
  font-size: 120%;
}

h5 {
  font-size: 110%;
}

title, h1, h2 {
  hyphenate: none;
  page-break-before: always;
  page-break-inside: avoid;
  page-break-after: avoid;
  /* title.all */
  text-align: center;
  text-indent: 0em;
  margin-top: 0.3em;
  margin-bottom: 0.3em;
  margin-left: 0em;
  margin-right: 0em;
  font-size: 110%;
  font-weight: bolder;
}

subtitle, h3, h4, h5, h6 {
  hyphenate: none;
  page-break-inside: avoid;
  page-break-after: avoid;
  /* subtitle.all */
  text-align: center;
  text-indent: 0em;
  margin-top: 0.2em;
  margin-bottom: 0.2em;
  font-style: italic;
}

table {
  font-size: 80%;
}

td, th {
  text-indent: 0px;
  padding: 3px;
}

th {
  font-weight: bold;
  background-color: #DDD;
}

table > caption {
  text-indent: 0px;
  padding: 4px;
  background-color: #EEE;
}

code, pre {
  display: block;
  white-space: pre;
  text-align: left;
  font-family: "Courier New", "Courier", monospace;
  text-align: left;
}

body[name="notes"] {
  font-size: 70%;
}

body[name="notes"] section title {
  display: run-in;
  text-align: left;
  font-size: 110%;
  font-weight: bold;
  page-break-before: auto;
  page-break-inside: auto;
  page-break-after: auto;
}

body[name="notes"] section title p {
  display: inline;
}

description {
  display: block;
}

title-info {
  display: block;
}

annotation {
  margin-left: 5%;
  margin-right: 5%;
  font-size: 80%;
  font-style: italic;
  text-align: justify;
  text-indent: 2em;
}

date {
  display: block;
  font-size: 80%;
  font-style: italic;
  text-align: center;
}

genre {
  display: none;
}

author {
  display: none;
}

book-title {
  display: none;
}

keywords {
  display: none;
}

lang {
  display: none;
}

src-lang {
  display: none;
}

translator {
  display: none;
}

document-info {
  display: none;
}

publish-info {
  display: none;
}

custom-info {
  display: none;
}

coverpage {
  display: none;
}

head, form, script {
  display: none;
}

hr {
  height: 2px;
  background-color: #808080;
  margin-top: 0.5em;
  margin-bottom: 0.5em;
}

b,strong,i,em,dfn,var,q,u,del,s,strike,small,big,sub,sup,acronym,tt,sa mp,kbd,code {
  display: inline;
}

b,strong {
  font-weight: bold;
}

i,em,dfn,var {
  font-style: italic;
}

u {
  text-decoration: underline;
}

del,s,strike {
  text-decoration: line-through;
}

small {
  font-size: 80%;
}

big {
  font-size: 130%;
}

sub {
  vertical-align: sub;
  font-size: 70%;
}

sup {
  vertical-align: super;
  font-size: 70%;
}

tt, samp, kbd, code, pre {
  font-family: "Courier New", "Courier", monospace;
}

pre {
  display: block;
  margin-top: 0.5em;
  margin-bottom: 0.5em;
  white-space: pre;
  text-align: left;
  /* background-color: #BFBFBF; */;
}

nobr {
  display: inline;
  hyphenate: none;
  white-space: nowrap;
}

h1,h2,h3,h4,h5,h6 {
  display: block;
  margin-top: 0.5em;
  margin-bottom: 0.3em;
  font-weight: bold;
  text-align: left;
}

h1 {
  font-size: 150%;
  /* color: #FFFFFF; background-color: #000000; */
  padding: 10px;
  margin-top: 0.5em;
  margin-bottom: 0.5em;
}

h2 {
  font-size: 135%;
  /* color: #FFFFFF; background-color: #808080; */
  padding: 10px;
  margin-top: 0.5em;
  margin-bottom: 0.5em;
}

h3 {
  font-size: 125%;
}

h4 {
  font-size: 125%;
  font-style: italic;
}

h5 {
  font-size: 115%;
  font-style: italic;
}

h6 {
  font-size: 105%;
  font-style: italic;
}

ul, ol, dl {
  display: block;
  margin-left: 1em;
  margin-top: 0.3em;
  margin-bottom: 0.3em;
  /* background-color: #808080; */;
}

li {
  display: block;
  margin-top: 0.3em;
  margin-bottom: 0.3em;
  background-color: #EFEFEF;
}

dl {
  margin-left: 0em;
}

dt {
  display: block;
  margin-left: 0em;
  margin-top: 0.3em;
  font-weight: bold;
}

dd {
  display: block;
  margin-left: 1.3em;
}

a {
  display: inline;
  text-decoration: underline;
}

span {
  display: inline;
}

cite {
  display: inline;
  font-style: italic;
}

div {
  display: block;
}

blockquote {
  display: block;
  margin-left: 1.5em;
  margin-right: 1.5em;
  margin-top: 0.5em;
  margin-bottom: 0.5em;
}

img {
  margin: 0.5em;
  text-align: center;
  text-indent: 0em;
  border-style: solid;
  border-width: medium;
}

table {
  font-size: 100%;
}

td, th {
  text-indent: 0px;
  padding: 3px;
}

th {
  font-weight: bold;
  text-align: center;
  background-color: #808080;
}

table caption {
  text-indent: 0px;
  padding: 4px;
}
)delimiter";
