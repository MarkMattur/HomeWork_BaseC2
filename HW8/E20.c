#include <stdio.h>
#include <inttypes.h>

/*
Переставить цифры
Переставить цифры в числе так, что бы получилось максимальное число.
Формат входных данных
Одно целое не отрицательное число
Формат результата
Целое не отрицательное число
Примеры
Входные данные
1229
Результат работы
9221
Входные данные
19
Результат работы
91
*/


int main(void)
{
    int numberDigits, count = 0;
    int number;
    int tempStore;

    scanf("%" SCNu32, &number);

    numberDigits = number;
    while (numberDigits != 0)
    {
        numberDigits = numberDigits / 10;
        count++;
    };


    int digit[count];
    for (int n = 0; n <= (count - 1); n++)
    {
        digit[n] = number % 10;
        number = number / 10;
        //~ printf("digit1[%d] = %d\n", n, digit[n]);
    }


        for (int n = count - 1; n >= 1; n--)
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


    for (int n = count - 1; n >= 0; n--)
    {
        printf("%d", digit[n]);
    }


    return 0;
}




