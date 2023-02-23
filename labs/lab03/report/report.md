---
## Front matter
title: "Отчет по лабораторной работе №3"
subtitle: "дисциплина: Операционные системы"
author: "Колобова Елизавета Андреевна, гр НММ-01"

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

Целью данной работы является освоение языка разметки Markdown.

# Задание

Оформить отчет по лабораторной работе №2 в формате Markdown.

# Выполнение лабораторной работы

Оформляем отчет по лабораторной работе №2 в формате Markdown.
Заполняем информацию об авторе по образцу, описываем цели, задачи и ход выполнения работы, дополняя текст ссылками на иллюстрации. (рис. [@fig:001], [@fig:002], [@fig:003]).

![Рис. 1. Создание отчета в формате Markdown](image/л3к1.png){#fig:001 width=70%}

![Рис. 2. Создание отчета в формате Markdown](image/л3к2.png){#fig:002 width=70%}

![Рис. 3. Создание отчета в формате Markdown](image/л3к3.png){#fig:003 width=70%}

# Выводы

Итогом выполнения работы является освоение языка разметки Markdown.

# Список литературы{.unnumbered}

::: {#refs}
:::
