#include <stdio.h>


/*
Только один раз
Дан массив из 10 элементов. В массиве найти элементы,
которые в нем встречаются только один раз, и вывести их на экран.
Формат входных данных
10 целых чисел через пробел
Формат результата
Элементы которые встречаются только один раз через пробел
Примеры
Входные данные
5   -4   0  1   4  -3  -3  3  0  2
Результат работы
5  -4  1  4  3  2
*/



int main(void)
{
    int arrayLength = 10;
    int digit[arrayLength];
    int dubles[10] = {0};

    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        scanf("%d", &digit[n]);
        //~ printf("digit[%d] = %d\n", n, digit[n]);
    }


    //~ проверка снизу

        for (int n = 0; n <= (arrayLength - 1); n++)
        {
            for (int i = n + 1; i <= (arrayLength - 1); i++)
            {
                if ( digit[n] == digit[i] )
                {
                   dubles[n] = 1;
                }
            }
        }

    //~ проверка сверху


        for (int n = (arrayLength - 1); n >= 1; n--)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if ( digit[n] == digit[i] )
                {
                   dubles[n] = 1;
                }
            }
        }



    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        if (dubles[n] == 0)
            printf("%d ", digit[n]);
    }


    return 0;
}


