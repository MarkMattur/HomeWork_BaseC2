#include <stdio.h>

/*
Проверка на простоту
Дано натуральное число n ≥ 1. Проверьте, является ли оно простым.
Программа должна вывести слово YES, если число простое или NO в противном случае.
Необходимо составить рекурсивную функцию и использовать ее.
int is_prime(int n, int delitel)
Формат входных данных
Натуральное число
Формат результата
YES или NO
Примеры
Входные данные
11
Результат работы
YES
Входные данные
12
Результат работы
NO
Входные данные
73
Результат работы
YES
*/


int is_prime(int n, int delitel)
{
    static int prime = 0;


    if (n == delitel)
    {
        if (n == 1)
            return 0;
        //~ printf("%d", prime);
        return (prime == 1);
    }
    if (n % delitel == 0)
        prime++;
    delitel++;
    return is_prime(n, delitel);
}

int even_print()
{
    int currentDigit;
    scanf("%d", &currentDigit);
    if (currentDigit == 0)
        return 0;
    if ((currentDigit % 2) != 0)
        printf("%d ", currentDigit);
    return even_print();

}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%s\n", (is_prime(n, 1) ? ("YES\n") : ("NO\n")));
    return 0;
}

