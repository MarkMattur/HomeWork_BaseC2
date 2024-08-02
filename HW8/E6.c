#include <stdio.h>

/*
Среднее арифметическое массива
Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива.
Формат входных данных
12 целых чисел через пробел
Формат результата
Среднее арифметическое в формате "%.2f"
Примеры
Входные данные
4 -5 3 10 -4 -6 8 -10 1 0 5 7
Результат работы
1.08
Входные данные
1 2 3 4 5 6 7 8 9 10 11 12
Результат работы
6.50
*/


int main(void)
{
    int arrayLengh = 12;
    int digit[arrayLengh];
    float meanSum = 0;

    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        scanf("%d", &digit[n]);
        //~ printf("%d ", digit[n]);
    }

    for (int n = 0; n <= (arrayLengh - 1); n++)
    {
        meanSum += (1.0 * digit[n] / arrayLengh);
    }

    printf("%.2f\n", meanSum);
    return 0;
}

