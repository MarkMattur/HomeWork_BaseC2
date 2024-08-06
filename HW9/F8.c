#include <stdio.h>

/*
Пропущенное число
В последовательности записаны целые числа от M до N
( M меньше N, M больше или равно 1)в произвольном порядке,
но одно из чисел пропущено (остальные встречаются ровно по одному разу).
N не превосходит 1000. Последовательность заканчивается числом 0.
Определить пропущенное число.
Формат входных данных
Последовательность целых чисел от M до N. M, N не превосходит 1000.
Формат результата
Одно целое число
Примеры
Входные данные
2   3   1   4   7   6   9   8  10   0
Результат работы
5
Входные данные
41 40 39 38 37 36 34 33 32 31 50 49 48 47 46 45 44 43 42 30 0
Результат работы
35
*/

int min = 1000;
int max = 1;
int size = 1;
int a[1000] ={0};


int doWhileInput()
{
    int digit;
    do
    {
        scanf("%d", &digit);
        //~ printf("digit = %d\n", digit);
        if (digit != 0)
        {
            size++;
            a[digit] = digit;
            //~ printf("a[%d] = %d\n", digit, a[digit]);
            if (min > a[digit])
            {
                min = a[digit];
            }
            if (max < a[digit])
            {
                max = a[digit];
            }
        }
    } while (digit != 0);

    return a[size];
}

int main()
{
    doWhileInput();

    for (int n = min; n <= max; n++)
    {
        //~ printf("%d ", a[n]);
        if (a[n] == 0)
        {
            printf("%d\n", n);
        }
    }
    //~ printf("min = %d\n", min);
    //~ printf("max = %d\n", max);
    return 0;
}
