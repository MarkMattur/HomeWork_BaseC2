#include <stdio.h>


/*
Циклический сдвиг массива вправо
Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.
Формат входных данных
10 целых чисел через пробел
Формат результата
10 целых чисел через пробел сдвинутых вправо на 1 элемент циклически
Примеры
Входные данные
4   -5   3  10  -4  -6  8  -10  1  0
Результат работы
0   4   -5   3  10  -4  -6  8  -10  1
Входные данные
1 2 3 4 5 6 7 8 9 10
Результат работы
10 1 2 3 4 5 6 7 8 9

*/

int main(void)
{
    int arrayLengh = 10;
    int digit[arrayLengh];
    int tempStore;

    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        scanf("%d", &digit[n]);
        //~ printf("digit[%d] = %d\n", n, digit[n]);
    }

    tempStore = digit[arrayLengh - 1];

    for (int n = (arrayLengh - 1); n >= 1; n--)
    {
        digit[n] = digit[n - 1];
    }

    digit[0] = tempStore;

    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        printf("%d ", digit[n]);
    }


    return 0;
}

