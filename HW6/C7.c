#include <stdio.h>

/*
Перевести число N в систему счисления P
Составить функцию, которая переводит число N из десятичной системы
счисления в P-ичную систему счисления.

Формат входных данных
Два целых числа. N ≥ 0 и 2 ≥ P ≥ 9
Формат результата
Одно целое число

Примеры
Входные данные
25 5
Результат работы
100

Входные данные
9 2
Результат работы
1001

Входные данные
11 3
Результат работы
102
*/

int decToP(int n, int p)
{
    int prod, temp = 0;
    int i = 1;
    while (n/p > 0)
    {
        prod = n % p;
        n = n / p;
        //~ printf("prod = %d", prod);
        //~ printf(" n = %d", n);
        temp += prod * i;
        //~ printf(" temp = %d", temp);
        i *= 10;
        //~ printf(" i = %d\n", i);

    }
    prod = temp + i * n;
    //~ printf("prod = %d", prod);

    return (prod);
}

int main()
{
    int n, p;
    scanf("%d%d", &n, &p);

    printf("%d\n", decToP(n, p));

    return 0;
}
