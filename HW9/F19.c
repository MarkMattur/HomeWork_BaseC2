#include <stdio.h>

/*
Больше среднего
Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов главной диагонали.
Реализовать функцию среднее арифметическое главной диагонали.
Формат входных данных
5 строк по 5 целых чисел через пробел
Формат результата
Одно целое число
Примеры
Входные данные
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
Результат работы
10
*/

enum {size = 5};
int a[size][size];
int sumAvDiag;

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


int find_meanSum_diag(int size, int a[size][size])
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
    return sum_diag/size;
}


int numGreaterAverage(int sumAvDiag)
{
    int greaterAverage = 0;
    for (int i = 0; i <= (size - 1); i++)
    {
        for (int j = 0; j <= (size - 1); j++)
        {
            if (a[i][j] > sumAvDiag)
            {
                greaterAverage++;
            }
        }
    }
    return greaterAverage;
}

int main()
{
    input();
    sumAvDiag = find_meanSum_diag(size, a);
    printf("%d", numGreaterAverage(sumAvDiag));
    return 0;
}

