#include <stdio.h>


/*

Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.
Формат входных данных
12 целых чисел через пробел
Формат результата
12 целых чисел через пробел
Примеры
Входные данные
4  -5   3  10  -4  -6   8 -10   1   0   5   7
Результат работы
1   0   5   7   4  -5   3  10  -4  -6   8 -10
Входные данные
1 2 3 4 5 6 7 8 9 10 11 12
Результат работы
9 10 11 12 1 2 3 4 5 6 7 8

*/

int main(void)
{
    int arrayLengh = 12;
    int digit[arrayLengh];
    int tempStore;

    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        scanf("%d", &digit[n]);
        //~ printf("digit[%d] = %d\n", n, digit[n]);
    }



    for (int i = 1; i <= 4; i++)
    {
        tempStore = digit[arrayLengh - 1];

        for (int n = (arrayLengh - 1); n >= 1; n--)
        {
            digit[n] = digit[n - 1];
        }

        digit[0] = tempStore;
    }



    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        printf("%d ", digit[n]);
    }


    return 0;
}



