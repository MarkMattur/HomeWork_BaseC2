#include <stdio.h>

/*
Сумма цифр в тексте
Составить функцию, которая преобразует текущий символ цифры в число.

Написать программу считающую сумму цифр в тексте.
int digit_to_num(char c)

Формат входных данных
Строка состоящая из английских букв, пробелов, знаков препинания. В конце строки символ точка.

Формат результата
Целое число - сумма цифр в тексте

Примеры
Входные данные
1Hello 36world.
Результат работы
10

Входные данные
abc 1def2 3.
Результат работы
6
*/


int digit_to_num(char c)
{

    int   intResult = c - '0';  /* ((int)a) - ((int)'0'),*/

    return intResult;
}

int main ()
{
    char character;
    int sum = 0;
    do
    {
        character = getchar();

        if (character >= '0' && character <= '9')
        {
            sum += digit_to_num(character);
            //~ printf("%d\n", sum);
        }

    } while (character != '.');

    printf("%d\n", sum);

  return 0;
}
