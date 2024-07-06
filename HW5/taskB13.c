#include <stdio.h>

/*
Количество четных и нечетных цифр
Посчитать количество четных и нечетных цифр числа.

Формат входных данных
Одно целое неотрицательное число.

Формат результата
Два числа через пробел. Количество четных и нечетных цифр в числе.

Примеры

Входные данные
1234
Результат работы
2 2

Входные данные
787
Результат работы
1 2
*/


int main(void)
{
    unsigned int numberDigits, count = 0;
    unsigned int number;
    scanf("%u", &number);

    numberDigits = number;
    while (numberDigits != 0)
    {
        numberDigits = numberDigits / 10;
        count++;
    };

    int digit[count];
    for (int n = 1; n <= count; n++)
    {
        digit[n] = number % 10;
        number = number / 10;
    }

    int even = 0;
    for (int n = 1; n <= count; n++)
    {
        if ((digit[n] % 2) == 0)
        {
            even += 1;
        }
    }

    int noteven = 0;
    for (int n = 1; n <= count; n++)
    {
        if ((digit[n] % 2) != 0)
        {
            noteven += 1;
        }
    }

    printf("%u %u\n", even, noteven);

    return 0;
}

