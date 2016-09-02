#include "docformats.h"

const char* CRCSS_TXT = R"delimiter(
body {
  text-align: left;
  text-indent: 0px;
}

p {
  /* def.all */ text-align: justify; text-indent: 1.2em; margin-top: 0em; margin-bottom: 0em; margin-left: 0em; margin-right: 0em;
}

empty-line {
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

cite p {
  /* cite.all */ text-align: justify; text-indent: 1.2em; margin-top: 0.3em; margin-bottom: 0.3em; margin-left: 1em; margin-right: 1em; font-style: italic;
}

epigraph p {
  /* epigraph.all */ text-align: left; text-indent: 1.2em; margin-top: 0.3em; margin-bottom: 0.3em; margin-left: 15%; margin-right: 1em; font-style: italic;
}

v {
  text-align: left;
  text-indent: 0px;
}

stanza + stanza {
  margin-top: 1em;
}

stanza {
  /* poem.all */ text-align: left; text-indent: 0em; margin-top: 0.3em; margin-bottom: 0.3em; margin-left: 15%; margin-right: 1em; font-style: italic;
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
  /* epigraph.all */ text-align: left; text-indent: 1.2em; margin-top: 0.3em; margin-bottom: 0.3em; margin-left: 15%; margin-right: 1em; font-style: italic;
}

cite {
  font-style: italic;
  margin-left: 5%;
  margin-right: 5%;
  text-align: justyfy;
  margin-top: 20px;
  margin-bottom: 20px;
}

title p, h1 p, h2 p {
  /* title.all */ text-align: center; text-indent: 0em; margin-top: 0.3em; margin-bottom: 0.3em; margin-left: 0em; margin-right: 0em; font-size: 110%; font-weight: bolder;
}

subtitle p, h3 p, h4 p, h5 p, h6 p {
  /* subtitle.all */ text-align: center; text-indent: 0em; margin-top: 0.2em; margin-bottom: 0.2em; font-style: italic;
}

title, h1, h2 {
  $title.all hyphenate: none;
  page-break-before: always;
  page-break-inside: avoid;
  page-break-after: avoid;
}

subtitle, h3, h4, h5, h6 {
  $subtitle.all hyphenate: none;
  page-break-inside: avoid;
  page-break-after: avoid;
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
  /* pre.all */ text-align: left; text-indent: 0em; margin-top: 0em; margin-bottom: 0em; margin-left: 0em; margin-right: 0em; font-family: "Courier New", "Droid Sans Mono", monospace;
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
)delimiter";
