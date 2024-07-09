#include <stdio.h>


/*
Вычислить cos

Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
float cosinus(float x)

Формат входных данных
Целое число от 0 до 90

Формат результата
Вещественное число в формате "%.3f"

Примеры
Входные данные
60
Результат работы
0.500
*/

float absMod (float a)
{
    return (a < 0) ? -a : a;
}

unsigned long long int factorial(int fact)
{
    unsigned long long int resultFact = 1;
    for (int i = 1; i <= fact; i++)
    {
        resultFact *= i;
    };
    return (resultFact);

}

float power(float base, float degree)
{
     float resultPow = 1;

    for (int i = 1; i <= degree; i++)
    {
        resultPow *= base;
    }

    if (degree == 0)
    {
        return (1);
    }
    return (resultPow);

}


float cosinus(float x)
{
    float oldResultSin, newResultSin, sub;

    newResultSin = 0;
    int n = 0;

    do
    {
        oldResultSin = newResultSin;
        newResultSin += ( power(-1,n) * power(x, (2*n))) / factorial((2*n));


        //~ printf("power(-1,n) = %.4f\n", power(-1,n));
        //~ printf("power(x, (2*n + 1)) = %.4f\n",power(x, (2*n + 1)));
        //~ printf("factorial((2*n + 1) = %llu\n",factorial(2*n + 1));
        n++;
        //~ printf("oldResultSin = %.4f newResultSin = %.4f\n", oldResultSin, newResultSin);
        //~ printf("absMod = %.4f\n", absMod( oldResultSin - newResultSin ));

        sub = absMod (absMod(oldResultSin) - absMod(newResultSin));

    } while ( sub > 0.001 );


    return (newResultSin);

}

int main()
{
    float num, rad;
    scanf("%f", &num);

    rad = num * 3.1415926535 / 180;

    printf("%.3f", cosinus(rad));
    return 0;
}


