#include <stdio.h>


/*
Сумма положительных элементов
Считать массив из 10 элементов и посчитать сумму положительных элементов массива.
Формат входных данных
10 целых чисел через пробел
Формат результата
Одно целое число - сумма положительных элементов массива
Примеры
Входные данные
4 -5 3 10 -4 -6 8 -10 1 0
Результат работы
26
Входные данные
1 -2 3 -4 5 -6 7 -8 9 0
Результат работы
25

*/

int main(void)
{
    int arrayLengh = 10;
    int digit[arrayLengh];
    int sumPos = 0;

    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        scanf("%d", &digit[n]);
        //~ printf("digit[n] = %d\n", digit[n]);
    }



    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        if (digit[n] > 0)
        {
            sumPos += digit[n];
            //~ printf("sumPos = %d\n", sumPos);
        }
    }

    printf("%d\n", sumPos);
    return 0;
}

