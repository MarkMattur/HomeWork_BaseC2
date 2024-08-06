#include <stdio.h>

/*
Наибольший общий делитель
Составить программу для вычисления НОД с помощью алгоритма Евклида.
Даны два натуральных числа. Найти наибольший общий делитель.

Формат входных данных
Два неотрицательных целых числа

Формат результата
Одно целое число наибольший общий делитель

Примеры

Входные данные
14 21
Результат работы
7

Входные данные
27 18
Результат работы
9

Модифицированный алгоритм Евклида.
НОД (14, 35) = (14, 35%14) =
НОД(14, 7) = НОД(14%7,7) = НОД(0, 7) = 7

*/

int main(void)
{
    int num1, num2, numMax, numMin, temp;


    scanf("%d%d", &num1, &num2);

    numMax = num1;
    numMin = num2;

    while (numMin != 0)
        {
            if (num1 >= num2)
            {
                numMax = num1;
                numMin = num2;
            }
            else
            {
                numMax = num2;
                numMin = num1;
            }

            temp = numMin;
            numMin = numMax % numMin;
            numMax = temp;

            num1 = numMin;
            num2 = numMax;

        }

    printf("%d\n", numMax);

    return 0;
}




