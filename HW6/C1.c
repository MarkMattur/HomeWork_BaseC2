#include <stdio.h>

/*
Модуль числа
Составить функцию, модуль числа и привести пример ее использования.

Формат входных данных
Целое число

Формат результата
Целое не отрицательное число

Примеры
Входные данные
-100
Результат работы
100
*/



int abs (int a)
{
    return (a < 0) ? -a : a;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", abs(num));
    return 0;
}