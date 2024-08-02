#include <stdio.h>


/*
Два максимума
Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.
Формат входных данных
10 целых чисел через пробел.
Формат результата
Сумма двух максимальных элементов.
Примеры
Входные данные
4 -5 3 10 -4 -6 8 -10 1 0
Результат работы
18
Входные данные
1 2 3 4 5 6 7 8 9 10
Результат работы
19
*/

int main(void)
{
    int arrayLengh = 10;
    int digit[arrayLengh];
    int maxElem, maxMaxElem, index;

    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        scanf("%d", &digit[n]);
        //~ printf("digit[n] = %d\n", digit[n]);
    }

    maxMaxElem = digit[0];
    maxElem = digit[0];

    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        if (maxMaxElem < digit[n])
        {
            maxMaxElem = digit[n];
            index = n;
            //~ printf("maxMaxElem = %d\n", maxMaxElem);
        }
    }


    if (maxMaxElem == digit[0])
          maxElem = digit[1];


    for (int m = 0; m <= (arrayLengh - 1); m++)
    {
        if ((maxElem < digit[m]) && (m != index))
        {
            maxElem = digit[m];
            //~ printf("maxElem = %d\n", maxElem);
        }
    }

    printf("%d\n", maxElem + maxMaxElem);
    return 0;
}
