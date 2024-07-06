#include <stdio.h>
#include <inttypes.h>

/*
Все цифры четные
Ввести целое число и определить, верно ли, что все его цифры четные.

Формат входных данных
Одно целое число

Формат результата
YES или NO

Примеры

Входные данные
2684
Результат работы
YES

Входные данные
2994
Результат работы
NO
*/


int main(void)
{
    int numberDigits, count = 0;
    int number;
    scanf("%" SCNu32, &number);

    numberDigits = number;
    while (numberDigits != 0)
    {
        numberDigits = numberDigits / 10;
        count++;
    };

    int digit[count];
    for (int n = 1; n <= count; n++)
    {
        digit[n] = number % 10;
        number = number / 10;
    }

    int even = 0;
    for (int n = 1; n <= count; n++)
    {
        if ((digit[n] % 2) == 0)
        {
            even += 1;
        }
    }

    if (even == count)
    {
        printf("%s\n", "YES");
    }
    else
    {
        printf("%s\n", "NO");
    }

    return 0;
}

