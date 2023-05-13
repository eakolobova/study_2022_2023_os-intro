---
## Front matter
title: "Отчет по индивидуальному проекту, этап 5"
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
- Добавить на сайт информацию о проектах

# Выполнение лабораторной работы
1. Добавляем проект и два поста : на выбранную тему и по прошедшей неделе.
Механизм везде один: в соответствующем каталоге делаем копии папок с контентом, переименовываем, вставляем картинку (с таким же именем и типом, как в примере), редактируем текстовый файл, как нам нужно. После все этого загружаем изменения на гитхаб
(рис. [@fig:001], [@fig:002], [@fig:003]).

![Пост 1](image/к1.png){#fig:001 width=70%}

![Пост 2](image/к2.png){#fig:002 width=70%}

![Проект](image/к3.png){#fig:003 width=70%}

# Выводы

ИТогом проделанной работы является добавление на сайт информации о проектах

# Список литературы{.unnumbered}

::: {#refs}
:::
