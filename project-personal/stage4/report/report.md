---
## Front matter
title: "Отчет по индивидуальному проекту, этап 4"
subtitle: "дисциплина Операционные системы"
author: "Колобова Елизавета, гр. НММбд-01-22"

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

Создание и редактура сайта научного работника

# Задание

Добавить на сайт личную информацию, создать тематические посты.

# Выполнение лабораторной работы
1. В каталоге website, в котором находится рабочий репозиторий сайта, выполняем команду hugo server 

2. Зарегистрируемся на следующих ресурсах и разместим ссылки на них на сайте (рис. [@fig:001]):

   - eLibrary;
   - Google Scholar;
   - ORCID;
   - Mendeley;
   - ResearchGate;
   - Academia.edu;
   - arXiv;
   - github.
   
![Рис. 1. Добавление ссылок на научно-исследовательские сайты](image/p1.png){#fig:001 width=70%}

3. Сделаем пост по прошедшей неделе. Для этого в папке content/posts создадим новую папку с названием поста, добавим в нее картинку с названием featured.png и файл index.md, аналогичные тем, что содержатся в папках с примерами постов. В файле редактируем заголовок и текст поста. (рис. [@fig:002])

![Рис. 2. Пост по прошедшей неделе](image/p3.png){#fig:002 width=70%}

4. Добавим пост на тему по выбору: работа с библиографией. Все аналогично предыдущему пункту.
(рис. [@fig:003])

![Рис. 3. Пост на тему "Работа с библиографией"](image/p2.png){#fig:003 width=70%}

5. Выполняем в каталоге website команду hugo и в этом же каталоге отправляем файлы на сервер github (git add ., git commit, git push), далее переходим в каталог public и еще раз отправляем файлы на сервер github.

# Выводы

Мы загрузили на сайт ссылки на научные сайты и сделали посты.

# Список литературы{.unnumbered}

::: {#refs}
:::
