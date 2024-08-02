#include <stdio.h>

/*
Инверсия половинок
Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин массива. Необходимо изменить считанный массив и напечатать его одним циклом.
Формат входных данных
10 целых элементов массива через пробел.
Формат результата
10 целых элементов массива через пробел.
Примеры
Входные данные
4 -5 3 10 -4 -6 8 -10 1 0
Результат работы
-4 10 3 -5 4 0 1 -10 8 -6
Входные данные
1 2 3 4 5 6 7 8 9 10
Результат работы
5 4 3 2 1 10 9 8 7 6
*/

int arrayLength = 10;
int digit[10];
int temp[10];

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
    invert(0, 4);
    invert(5, 9);
    output();
    return 0;
}

