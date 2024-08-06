#include <stdio.h>

/*
След матрицы
Составить функцию которая находит след матрицы в двумерном массиве.
Показать пример ее работы на матрице из 5 на 5 элементов.
След матрицы - это сумма элементов на главной диагонали.
Формат входных данных
25 целых чисел через пробел.
Формат результата
Одно целое число.
Примеры
Входные данные
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
Результат работы
15
*/

enum {size = 5};
int a[size][size];

int input()
{
    for (int i = 0; i <= (size - 1); i++)
    {
        for (int j = 0; j <= (size - 1); j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    return a[size][size];
}


int find_sum_diag(int size, int a[size][size])
{

int sum_diag = 0;

    for(int i = 0; i <= size - 1; ++i)
    {
        for(int j = 0; j <= size - 1; ++j)
        {
            if (i == j)
            {
                sum_diag = sum_diag + a[i][j];
            }
        }
    }
    return sum_diag;

}


int main()
{
    input();

    printf("%d", find_sum_diag(size, a));

    return 0;
}

