Описание игры
Цель игры - отгадать слово менее чем за 8 попыток.
В начале игры программа выбирает случайным образом слово из словаря. Словарь имеет текстовый формат, каждое слово записано с новой строки.
После определения слова и вывода на экран количества букв в этом слове (в виде нижних подчеркиваний), игрок начинает вводить по одной букве.
Если в загаданном слове есть введенная буква, то она открывается на всех местах в слове.
Если введенная буква отсутствует в загаданном слове, то рисуется следующий элемент виселицы. 

Требование к функциональным характеристикам
Слово выбирается по следующему алгоритму: генерируется случайное число в определённом диапазон, после чего выбирается слово с этим номером.
Изначально массив имеет длину загаданного слова и заполнен нижними подчеркиваниями, в процессе игры подчеркивания заменяются отгаданными буквами на соответствующих местах.
Игра заканчивается в двух случаях:
1) игрок отгадал слово, совершив менее 8 ошибок и победил.
2) игрок совершил 8 ошибок и проиграл.

Формат входных данных
Вводятся символы латиницы нижнего регистра.

Интерфейс
В терминале Linux выводится приветствие и правила игры.
