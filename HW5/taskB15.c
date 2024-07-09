#include <stdio.h>

/*
Количество четных чисел
Дана последовательность ненулевых целых чисел, в конце последовательности число 0.
Посчитать количество четных чисел.

Формат входных данных
Последовательность ненулевых целых чисел. В конце последовательности число ноль.

Формат результата
Одно целое число - количество четных чисел.

Примеры

Входные данные
15 22 2 4 1 6 0
Результат работы
4

Входные данные
27 1 3 7 0
Результат работы
0
*/


int main(void)
{
    unsigned int number, count = 0;
    unsigned int digit[100];

    do
    {
        scanf("%u", &number);
        count++;
        digit[count] = number;
    }while (number != 0);


    int even = 0;
    for (int n = 1; n <= (count-1); n++)
    {
        if ((digit[n] % 2) == 0)
        {
            even += 1;
        }
    }

    printf("%u\n", even);

    return 0;
}
