#include <stdio.h>
#include <inttypes.h>

/*
Отсортировать по последней цифре
Считать массив из 10 элементов и отсортировать его по последней цифре.
Формат входных данных
10 целых чисел через пробел
Формат результата
Этот же массив отсортированный по последней цифре
Примеры
Входные данные
14  25  13  30  76  58  32  11  41  97
Результат работы
30  11  41  32  13  14  25  76  97  58
Входные данные
109 118 100 51 62 73 1007 16 4 555
Результат работы
100 51 62 73 4 555 16 1007 118 109
*/

int arrayLength = 10;
int digit[10];
int tempStore;

int input()
{
    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        scanf("%d", &digit[n]);
    }
    return digit[arrayLength];
}

void output()
{
    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        printf("%d ", digit[n]);
    }
}

int bubleSort()
{
    for (int n = arrayLength - 1; n >= 1; n--)
    {
        for (int i = 0; i < n; i++)
        {
            if ( digit[i] % 10 > digit[i+1] % 10 )
            {
                tempStore = digit[i];
                digit[i] = digit[i+1];
                digit[i+1] = tempStore;
            }
        }
    }
    return digit[arrayLength];
}

int main()
{
    input();
    bubleSort();
    output();
    return 0;
}

