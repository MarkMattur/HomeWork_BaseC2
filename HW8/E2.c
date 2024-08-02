#include <stdio.h>

/*
Найти минимум
Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.
Формат входных данных
5 целых чисел через пробел
Формат результата
Одно единственное целое число
Примеры
Входные данные
4 15 3 10 14
Результат работы
3
Входные данные
1 2 3 4 -5
Результат работы
-5
*/


int main(void)
{
    int digit[5];
    int minElem;

    for (int n = 0; n <= 4; n++)
    {
        scanf("%d", &digit[n]);
        //~ printf("digit[n] = %d\n", digit[n]);
    }

    minElem = digit[0];
    for (int n = 1; n <= 4; n++)
    {
        if (minElem > digit[n])
        {
            minElem = digit[n];
            //~ printf("minElem = %d\n", minElem);
        }
    }


    printf("%d\n", minElem);
    return 0;
}
