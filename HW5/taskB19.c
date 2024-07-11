#include <stdio.h>


/*
Сумма цифр равна 10
Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.

Формат входных данных
Натуральное число

Формат результата
YES или NO

Примеры

Входные данные
1234
Результат работы
YES

Входные данные
1233
Результат работы
NO
*/


int main(void)
{
    unsigned int numberDigits, count = 0;
    unsigned int number;
    scanf("%u", &number);

    numberDigits = number;

    do
    {
        numberDigits = numberDigits / 10;
        count++;
    }while (numberDigits != 0);

    int digit[count];
    for (int n = 1; n <= count; n++)
    {
        digit[n] = number % 10;
        number = number / 10;
    }

    int sum = 0;
    for (int n = 1; n <= count; n++)
    {
        sum += digit[n];
    }

    if (sum == 10)
    {
        printf("%s\n", "YES");
    }
    else
    {
        printf("%s\n", "NO");
    }

    return 0;
}

