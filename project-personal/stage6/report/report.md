---
## Front matter
title: "Отчет по индивидуальному проекту, этап 6"
subtitle: "дисциплина Операционные системы"
author: "Колобова Елизавета, гр. НММ-01-22"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы
- Добавить на сайт поддержку двух языков

# Выполнение лабораторной работы
1. В папке config/_default редактируем файл languages: раскомментируем нужные строки. Также создаем в папке content подпапки en и ru, весь контент на английском языке перемещаем в первую подпапку, на русском - во вторую. Папку admin и файл _index.md нужно оставить в content, чтобы сайт продолжал работать. В подпапках переводим посты и проекты на нужный язык. (рис. [@fig:001], [@fig:002], [@fig:003], [@fig:004]).

![Отредакитрованный languages](image/p1.png){#fig:001 width=70%}

![Размещение файлов в content](image/p2.png){#fig:002 width=70%}

![Переведенный файл с личной информацией](image/p3.png){#fig:003 width=70%}

![Преведенный пост](image/p4.png){#fig:004 width=70%}

2. Добавляем пост по прошедшей неделе на двух языках: в соответствующих каталогах делаем копии папок с контентом, переименовываем, вставляем картинку (с таким же именем и типом, как в примере), редактируем текстовый файл, как нам нужно. После все этого загружаем изменения на гитхаб
(рис. [@fig:005]).

![Новый пост на двух языках](image/p5.png){#fig:005 width=70%}

# Выводы

ИТогом проделанной работы является добавление на сайт поддержки двух языков

# Список литературы{.unnumbered}

::: {#refs}
:::
