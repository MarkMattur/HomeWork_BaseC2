#include <stdio.h>


/*
По убыванию и по возрастанию
Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую – по убыванию.
Формат входных данных
10 целых чисел через пробел
Формат результата
Исходный массив. Первая часть отсортирована по возрастанию, вторая половина по убыванию.
Примеры
Входные данные
14  25  13  30  76  58  32  11  41  97
Результат работы
13  14  25  30  76  97  58  41  32  11
Входные данные
5 4 3 2 1 6 7 8 9 10
Результат работы
1 2 3 4 5 10 9 8 7 6
*/


int main(void)
{
    int arrayLength = 10;
    int digit[arrayLength];
    int tempStore;

    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        scanf("%d", &digit[n]);
        //~ printf("digit[%d] = %d\n", n, digit[n]);
    }


 //~ сортировка первой половины по возрастанию

        for (int n = (arrayLength / 2 - 1); n >= 1; n--)
        {
            for (int i = 0; i < n; i++)
            {
                if ( digit[i] > digit[i+1] )
                {
                    tempStore = digit[i];
                    digit[i] = digit[i+1];
                    digit[i+1] = tempStore;
                }
            }
        }


 //~ сортировка второй половины по убыванию

        for (int n = (arrayLength - 1); n >= (arrayLength / 2); n--)
        {
            for (int i = (arrayLength / 2); i < n; i++)
            {
                if ( digit[i] < digit[i+1] )
                {
                    tempStore = digit[i];
                    digit[i] = digit[i+1];
                    digit[i+1] = tempStore;
                }
            }
        }






    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        printf("%d ", digit[n]);
    }


    return 0;
}




