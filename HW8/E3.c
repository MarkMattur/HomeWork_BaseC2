#include <stdio.h>


/*
Максимум и минимум
Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.
Формат входных данных
10 целых чисел через пробел
Формат результата
4 целых числа через пробел: номер максимума, максимум, номер минимума, минимум.
Примеры
Входные данные
4 -5 3 10 -4 -6 8 -10 1 0
Результат работы
4 10 8 -10
Входные данные
1 2 3 4 5 6 7 8 9 10
Результат работы
10 10 1 1
*/


int main(void)
{
    int arrayLengh = 10;
    int digit[arrayLengh];
    int minElem, maxElem, numMinElem, numMaxElem;

    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        scanf("%d", &digit[n]);
        //~ printf("digit[n] = %d\n", digit[n]);
    }

    minElem = digit[0];
    numMinElem = 1;
    maxElem = digit[0];
    numMaxElem = 1;

    for (int n = 1; n <= (arrayLengh - 1); n++)
    {
        if (minElem > digit[n])
        {
            minElem = digit[n];
            numMinElem = n + 1;
            //~ printf("minElem = %d\n", minElem);
        }
        if (maxElem < digit[n])
        {
            maxElem = digit[n];
            numMaxElem = n + 1;
            //~ printf("minElem = %d\n", minElem);
        }

    }


    printf("%d %d %d %d\n", numMaxElem, maxElem, numMinElem, minElem);
    return 0;
}
