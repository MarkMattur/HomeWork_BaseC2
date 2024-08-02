#include <stdio.h>


/*
Инверсия каждой трети
Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.
Формат входных данных
12 целых чисел через пробел
Формат результата
12 целых чисел через пробел
Примеры
Входные данные
4 -5 3 10 -4 -6 8 -10 1 0 5 7
Результат работы
10 3 -5 4 -10 8 -6 -4 7 5 0 1
Входные данные
1 2 3 4 5 6 7 8 9 10 11 12
Результат работы
4 3 2 1 8 7 6 5 12 11 10 9
*/

static int arrayLength = 12;
int digit[12];
int temp[12];

int input()
{
    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        scanf("%d", &digit[n]);
        temp[n] = digit[n];
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

int invert(int start, int stop)
{
    for (int n = start; n <= stop; n++)
    {
        digit[n] = temp[stop + start - n];
    }
    return digit[arrayLength];
}

int main()
{
    input();
    invert(0, 3);
    invert(4, 7);
    invert(8, 11);
    output();
    return 0;
}
