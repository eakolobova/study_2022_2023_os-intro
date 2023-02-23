---
## Front matter
title: "**Отчёт по лабораторной работе №2**"
subtitle: "дисциплина Операционные системы"
author: "Колобова Елизавета Андреевна НММбд-01-22"

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

Целью работы является изучить идеологию и применение средств контроля версий. Приобрести практические навыки по работе с системой git.

# **Задание**

Выполнение настройки и работа с системой контроля версий Git 

# **Выполнение лабораторной работы**
 1. **Настройка github** 
Для выполнения лабораторных работ предлагается использовать Github. Создадим учётную запись на сайте https://github.com/ и заполним основные данные (рис. [-@fig:1]).

![Рис. 1. Создание учетной записи на Github](image/лзр1.png){#fig:1 width=70%}

2. **Базовая настройка git** 
Сначала сделаем предварительную конфигурацию git. Откроем терминал и введем следующие команды, указав имя и email владельца репозитория (рис. [-@fig:2]): 
```
git config --global user.name "" 
git config --global user.email "" 
```
![Рис. 2. Предварительная конфигурация git](image/л3р2.png){#fig:2 width=70%}

Настроим utf-8 в выводе сообщений git (рис. [-@fig:3]):
```
git config --global core.quotepath false
```
![Рис. 3. Настройка utf-8 в выводе сообщений git](image/л3р3.png){#fig:3 width=70%}

Зададим имя начальной ветки (будем называть её master) (рис. [-@fig:4], [-@fig:5]):
```
git config --global init.defaultBranch master 
Параметр autocrlf: git config --global core.autocrlf input 
Параметр safecrlf: git config --global core.safecrlf warn 
```
![Рис. 4. Задача имени начальной ветки](image/л3р4.png){#fig:4 width=70%}

![Рис. 5. Задача имени начальной ветки](image/л3р5.png){#fig:5 width=70%}

3. **Создание SSH ключа** 
Для последующей идентификации пользователя на сервере репозиториев сгенерируем приватный и открытый ключи (рис. [-@fig:6], [-@fig:7]):
```
ssh-keygen -C "Имя Фамилия " 
```
![Рис. 6. Генерация ssh-ключей](image/л3р6.png){#fig:6 width=70%}

![Рис. 7. Генерация ssh-ключей](image/л3р7.png){#fig:7 width=70%}

Ключи сохранятся в каталоге ~/.ssh/. 
Загрузим сгенерённый открытый ключ. Зайдем на сайт http://github.org/ под своей учётной записью и перейдем в меню Setting. После этого выберем в боковом меню SSH and GPG keys и вставляем ключ в появившееся на сайте поле и указываем для ключа имя (Title) (рис. [-@fig:9])
```
cat ~/.ssh/id_rsa.pub | xclip -sel clip 
```
![Рис. 9. Вставка ssh-ключей на сайте](image/л3р9.png){#fig:9 width=70%}

4. **Сознание рабочего пространства и репозитория курса на основе шаблона** 
Откроем терминал и создадим каталог для предмета (рис. [-@fig:10]): 
````
mkdir -p ~/work/study/2022-2023/"Операционные системы" 
```
![Рис. 10. Создание каталога курса](image/l2p3.png){#fig:10 width=70%}

5. **Сознание репозитория курса на основе шаблона** 
Авторизуемся (рис. [-@fig:11]):
```
gh auth login
```
![Рис. 11. авторизация на github](image/l2p4.png){#fig:11 width=70%}

Откроем терминал и перейдем в каталог курса: 
```
cd ~/work/study/2022-2023/"Операционные системы" 
```
клонируем созданный репозиторий (рис. [-@fig:15]): 
```
git clone --recursive git@github.com:/study_2022–2023_os-intro.git os-intro 
```
6. **Настройка каталога курса**
Перейдем в каталог курса: 
```
cd ~/work/study/2022-2023/"Операционные системы"/os-intro 
```
Удалим лишние файлы: 
```
rm package.json 
```
Создадим необходимые каталоги: 
```
echo os-intro > COURSE 
make 
```
Отправим файлы на сервер: 
```
git add . 
git commit -am 'feat(main): make course structure' 
git push 
```
(рис. [-@fig:15], [-@fig:16])

![Рис. 12. Клонирование репозитория, создание каталогов, отправка на сервер](image/л2к1.png){#fig:15 width=70%}

![Рис. 13. Клонирование репозитория, создание каталогов, отправка на сервер](image/л2к2.png){#fig:16 width=70%}

# Выводы

По итогам проделанной работы мы научились выполнять настройку и работать с системой контроля версий Git 

::: {#refs}
:::
