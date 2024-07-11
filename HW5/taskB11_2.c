#include <stdio.h>

/*
Перевернуть число
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

Формат входных данных
Целое неотрицательное число

Формат результата
Целое не отрицательное число наоборот

Примеры

Входные данные
1234
Результат работы
4321

Входные данные
782
Результат работы
287
*/


int main(void)
{
    unsigned int numberDigits, count = 0;
    unsigned int number;
    scanf("%u", &number);

    if (number == 0)
    {
        printf("%u\n", number);
        return 0;
    }

    numberDigits = number;
    while (numberDigits != 0)
    {
        numberDigits = numberDigits / 10;
        count++;
        //~ printf("count = %u ", count);
    };

    //~ printf("\n");

    int digit[count];
    for (int n = 0; n < count; n++)
    {
        digit[n] = number % 10;
        //~ printf("digit[%u] = %u ", n, digit[n]);
        number = number / 10;
        //~ printf("number = %u\n", number);
    }

    for (int n = 0; n < count; n++)
    {
        printf("%u", digit[n]);
    }

    printf("\n");

    return 0;
}

