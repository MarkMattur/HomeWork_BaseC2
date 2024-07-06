#include <stdio.h>

/*
Наименьшая и наибольшая цифра
Организовать ввод натурального числа с клавиатуры.
Программа должна определить наименьшую и наибольшую цифры,
которые входят в состав данного натурального числа.

Формат входных данных
Целое неотрицательное число

Формат результата
Две цифры через пробел. Сначала наименьшая цифра числа, затем наибольшая.

Примеры

Входные данные
15
Результат работы
1 5

Входные данные
2457
Результат работы
2 7

Входные данные
22
Результат работы
2 2
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

    int min = digit[1];
    for (int n = 2; n <= count; n++)
    {
        if (digit[n] < min)
        {
            min = digit[n];
        }
    }

    int max = digit[1];
    for (int n = 2; n <= count; n++)
    {
        if (digit[n] > max)
        {
            max = digit[n];
        }
    }


    printf("%u %u", min, max);

    return 0;
}
