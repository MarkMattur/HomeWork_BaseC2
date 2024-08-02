#include <stdio.h>

/*
Точная степень двойки
Написать логическую рекурсивную функцию и используя ее определить является ли введенное натуральное число точной степенью двойки.
int is2pow(int n)
Формат входных данных
Одно натуральное число.
Формат результата
YES или NO
Примеры
Входные данные
8
Результат работы
YES
Входные данные
7
Результат работы
NO
*/



int powOfTwo(int n)
{
    int remOfDiv;
    static int sum = 0;


    remOfDiv = n % 2;
    n /= 2;
    if (remOfDiv == 1)
        sum++;
    if (n > 2)
        powOfTwo(n);

    //~ printf("sum = %d\n", sum);
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%s\n", "YES\n");
        return 0;
    }
    if (n == 0)
    {
        printf("%s\n", "NO\n");
        return 0;
    }

    printf("%s\n", ((powOfTwo(n) > 0) ? ("NO\n") : ("YES\n")));
    return 0;
}

