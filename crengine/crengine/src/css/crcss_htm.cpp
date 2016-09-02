#include "docformats.h"

const char* CRCSS_HTM = R"delimiter(
head, style, form, script {
  display: none;
}

body {
  /* def.all */ text-align: justify; text-indent: 1.2em; margin-top: 0em; margin-bottom: 0em; margin-left: 0em; margin-right: 0em;
}

p {
  /* def.all */ text-align: justify; text-indent: 1.2em; margin-top: 0em; margin-bottom: 0em; margin-left: 0em; margin-right: 0em;
}

*.justindent {
  text-align: justify;
  text-indent: 1.2em;
  margin-top: 0em;
  margin-bottom: 0em;
}

empty-line {
  height: 0.2em;
}

hr {
  height: 2px;
  background-color: #808080;
  margin-top: 0.5em;
  margin-bottom: 0.5em;
}

b,strong,i,em,dfn,var,q,u,del,s,strike,small,big,sub,sup,acronym,tt,sa mp,kbd,code,font {
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
  /* pre.all */ text-align: left; text-indent: 0em; margin-top: 0em; margin-bottom: 0em; margin-left: 0em; margin-right: 0em; font-family: "Courier New", "Droid Sans Mono", monospace;
}

nobr {
  display: inline;
  hyphenate: none;
  white-space: nowrap;
}

h1,h2 {
  display: block;
  /* title.all */ text-align: center; text-indent: 0em; margin-top: 0.3em; margin-bottom: 0.3em; margin-left: 0em; margin-right: 0em; font-size: 110%; font-weight: bolder;
}

h3,h4,h5,h6 {
  display: block;
  /* subtitle.all */ text-align: center; text-indent: 0em; margin-top: 0.2em; margin-bottom: 0.2em; font-style: italic;
}

h1 {
  font-size: 150%;
}

h2 {
  font-size: 135%;
}

h3 {
  font-size: 125%;
}

h4 {
  font-size: 125%;
}

h5 {
  font-size: 115%;
}

h6 {
  font-size: 105%;
}

ul, ol, dl {
  display: block;
  margin-left: 1em;
  margin-top: 0.3em;
  margin-bottom: 0.3em;
}

li {
  display: list-item;
  text-indent: 0em;
  margin-top: 0.3em;
  margin-bottom: 0.3em;
}

dl {
  margin-left: 0em;
  list-style-type: disc;
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
  /* link.all */ text-decoration: underline;
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
