#include <stdio.h>

/*
Количество цифр в тексте
Составить логическую функцию, которая определяет, что текущий символ это цифра.
Написать программу считающую количество цифр в тексте.
int is_digit(char c)
Формат входных данных
Текст из английских букв и знаков препинания. В конце текста символ точка.
Формат результата
Одно целое число - количество цифр в тексте.
Примеры
Входные данные
1Hello 36world.
Результат работы
3
Входные данные
abcd.
Результат работы
0
*/

int is_digit(char c)
{
    int result;
    (c >= '0' && c <= '9') ? (result = 1) : (result = 0);
    return result;
}


int main ()
{
    char character;
    int count = 0;
    do
    {
        character = getchar();

        if (is_digit(character))
        {
            count++;
        }

    } while (character != '.');

    printf("%d\n", count);

  return 0;
}
