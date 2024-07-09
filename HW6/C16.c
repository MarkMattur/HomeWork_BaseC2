#include <stdio.h>

/*
Проверка на простоту
Составить функцию логическую функцию, которая определяет,
верно ли, что число простое. Используя функцию решить задачу.
int is_prime(int n)

Формат входных данных
Одно целое не отрицательное число.

Формат результата
YES или NO

Примеры
Входные данные
13
Результат работы
YES

Входные данные
136
Результат работы
NO
*/

int is_prime(int n)
{
    int not_prime = 0;



    for ( int i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
        {
            not_prime++;
        }
    }

    //~ printf ("not_prime = %d\n", not_prime);

    return ( not_prime == 2 );

}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s\n", (is_prime(n) ? ("YES\n") : ("NO\n")));
    return 0;
}





