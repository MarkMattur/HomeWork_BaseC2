#include <stdio.h>

/*
В прямом порядке
Дано натуральное число N. Выведите все его цифры по одной,
в прямом порядке, разделяя их пробелами или новыми строками.
Необходимо реализовать рекурсивную функцию.
void print_num(int num)

Формат входных данных
Одно целое неотрицательное число

Формат результата
Все цифры числа через пробел в прямом порядке.

Примеры
Входные данные
15
Результат работы
1 5

Входные данные
54321
Результат работы
5 4 3 2 1

*/

void printDigits(int n)
{
    int digit;

    digit = n % 10;
    n = n / 10 ;

    if (n > 0)
        printDigits(n);

    printf("%d ", digit);
    return;

}

int main()
{
    int n;
    scanf("%d", &n);
    printDigits(n);
    return 0;
}


