#include <stdio.h>

/*
В обратном порядке
Дано целое не отрицательное число N. Выведите все его цифры по одной,
в обратном порядке, разделяя их пробелами или новыми строками.
Составить рекурсивную функцию.

Формат входных данных
Одно не отрицательное целое число

Формат результата
Последовательность цифр введенного числа в обратном порядке через пробел
Примеры

Входные данные
15
Результат работы
5 1

Входные данные
54321
Результат работы
1 2 3 4 5
*/

void printDigits(int n)
{
    static int digit;

    digit = n % 10;
    n = n /10;

    printf("%d\n", digit);
    if (n == 0)
        return;
    printDigits(n);
}

int main()
{
    static int n;
    scanf("%d", &n);
    printDigits(n);
    return 0;
}

