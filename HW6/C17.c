#include <stdio.h>

/*
Сумма цифр равна произведению
Составить логическую функцию, которая определяет, верно ли,
что в заданном числе сумма цифр равна произведению.
int is_happy_number(int n)

Формат входных данных
Целое не отрицательное число

Формат результата
YES или NO

Примеры
Входные данные
123
Результат работы
YES

Входные данные
528
Результат работы
NO
*/

int is_happy_number(int n)
{
    int sum  = 0;
    int prod = 1;
    int digit;

    while (n > 0)
    {
        digit = n % 10;
        n     = n / 10;
        sum  += digit;
        prod *= digit;
        //~ printf("digit = %d n = %d sum = %d prod = %d\n",
                                    //~ digit, n, sum, prod);


    }

    return ( sum == prod );

}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%s\n", "YES\n");
    }
    else
    {
        printf("%s\n", (is_happy_number(n) ? ("YES\n") : ("NO\n")));
    }

    return 0;

}
