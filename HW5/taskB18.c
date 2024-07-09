#include <stdio.h>


/*
Числа Фибоначчи
Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.
Числа Фибоначчи – это элементы числовой последовательности
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …,
в которой каждое последующее число равно сумме двух предыдущих.

Формат входных данных
Одно натуральное число

Формат результата
Ряд чисел Фибоначчи через пробел

Примеры

Входные данные
5
Результат работы
1 1 2 3 5

Входные данные
10
Результат работы
1 1 2 3 5 8 13 21 34 55
*/


int main(void)
{

    unsigned int number;
    scanf("%u", &number);

    unsigned int fib[number];
    fib[1] = fib[2] = 1;

    for (int n = 3; n <= number; n++)
    {
        fib[n] = fib[n-1] + fib[n-2];
    }

    for (int n = 1; n <= number; n++)
    {
        printf("%u ", fib[n]);
    }

    return 0;
}
