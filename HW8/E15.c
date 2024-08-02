#include <stdio.h>

/*
Положительные и отрицательные
Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам:
в одни помещать только положительные, во второй - только отрицательные.
Числа, равные нулю, игнорировать. Вывести на экран все элементы обоих массивов.
Формат входных данных
10 целых чисел через пробел.
Формат результата
Сперва положительные числа, потом отрицательыне числа, через пробел.
Примеры
Входные данные
5 -4 0 1 4 -3 -3 3 0 2
Результат работы
5 1 4 3 2 -4 -3 -3
*/


int arrayLength = 10;
int digit[10];
int posDigits[10] = {0};
int negDigits[10] = {0};

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
        if ( posDigits[n] > 0)
        {
            printf("%d ", posDigits[n]);
        }
    }

    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        if ( negDigits[n] < 0)
        {
            printf("%d ", negDigits[n]);
        }
    }


}

int posDigitsSort()
{
    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        if (digit[n] > 0)
        {
            posDigits[n] = digit[n];
        }
    }
    return posDigits[arrayLength];
}

int negDigitsSort()
{
    for (int n = 0; n <= (arrayLength - 1); n++)
    {
        if (digit[n] < 0)
        {
            negDigits[n] = digit[n];
        }
    }
    return negDigits[arrayLength];
}


int main()
{
    input();
    posDigitsSort();
    negDigitsSort();
    output();
    return 0;
}



