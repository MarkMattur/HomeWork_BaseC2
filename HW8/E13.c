#include <stdio.h>

/*

Вторая с конца ноль
Считать массив из 10 элементов и отобрать в другой массив все числа,
у которых вторая с конца цифра (число десятков) – ноль.
Формат входных данных
10 целых чисел через пробел.
Формат результата
Целые числа через пробел, у котороых вторая с конца цифра - ноль
Примеры
Входные данные
40 105 203 1 14 1000 22 33 44 55
Результат работы
105 203 1 1000

*/

static int arrayLength = 10;
int digit[10];

int input()
{
    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        scanf("%d", &digit[n]);
    }
    return digit[arrayLength];
}

void output()
{
    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        if (((digit[n]/10)%10) == 0 )
            printf("%d ", digit[n]);
    }
}

int main()
{
    input();
    output();
    return 0;
}
