# Give Me Pass!
'Give Me Pass!' - это проcтой консольный генератор паролей

---
Для того, чтобы вывести справочное меню, введите:
```
./give-me-pass! --help
```
Либо:
```
./give-me-pass! -h
```
---
## Сборка
Для сборки исполняемого фала необходимо:
1. Склонировать данный репозиторий:
```
git clone https://github.com/n3cr0l0rd/give-me-pass.git
```
2. Перейти в папку с клонированным репозиторием:
```
cd give-me-pass
```
3. Начать сборку:
```
make
make clean
```
---
## Пример работы:
Задача: сгенерировать пароль, состоящий только из англлийских букв верхнего регистра
```
./give-me-pass! -u
```
Далее программа запросит длину пароля:
```
*********************
*   GIVE ME PASS!   *
*********************

Введите длину пароля:
```
Например, 10 символов
```
*********************
*   GIVE ME PASS!   *
*********************

Введите длину пароля: 10
------------------------
Ваш пароль:
UFEMBFJKES
------------------------
```
Аналогичным образом работает генерация паролей других типов

---
