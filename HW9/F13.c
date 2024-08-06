#include <stdio.h>

/*
В заданном интервале
Составить функцию которая возвращает количество элементов на заданном отрезке [from, to] для массива.
Прототип функции int count_between(int from, int to, int size, int a[])
Например, на отрезке [4, 6] в массиве 1 2 3 4 5 6 7 8 9 10 функция вернет 3 значения
Формат входных данных
Функция принимает значения концов отрезка from и to, размер массива, массив целых чисел.
Формат результата
Функция возвращает целое число - количество числе в интервале [from, to]
Примеры
Входные данные
4 6 1 2 3 4 5 6 7 8 9 10
Результат работы
3
*/


enum {SIZE = 10};
int a[SIZE];
int from, to;

int input()
{
    scanf("%d%d", &from, &to);
    for (int n = 0; n < SIZE; n++)
    {
        scanf("%d", &a[n]);
    }
    return a[SIZE];
}

int count_between(int from, int to, int SIZE, int a[])
{
    int countDigits = 2;
    for (int n = from+1; n < to; n++)
    {
        printf("%d ", a[n]);
        if (a[n] != 0)
        {
            countDigits++;
        }

    }
    return countDigits;
}


int main()
{
    input();
    printf("%d ", count_between(from, to, SIZE, a));

    return 0;
}
