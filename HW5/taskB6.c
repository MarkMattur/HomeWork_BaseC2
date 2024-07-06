#include <stdio.h>
#include <inttypes.h>

/*
Две одинаковые цифры рядом
Ввести целое число и определить, верно ли, что в его записи есть
две одинаковые цифры, стоящие рядом.

Формат входных данных
Одно целое число

Формат результата
Единственное слово: YES или NO

Примеры

Входные данные
1232
Результат работы
NO

Входные данные
1224
Результат работы
YES
*/


int main(void)
{
    int numberDigits, i = 0;
    int number;
    scanf("%" SCNu32, &number);

    numberDigits = number;
    while (numberDigits != 0)
    {
        numberDigits = numberDigits / 10;
        i++;
    };

    int digit[i];
    for (int n = 1; n <= i; n++)
    {
        digit[n] = number % 10;
        number = number / 10;
    }

    int dubles = 0;
    for (int n = 1; n <= (i-1); n++)
    {
        if (digit[n] == digit[n+1])
        {
            dubles = 1;
        }
    }

    if (dubles)
    {
        printf("%s\n", "YES");
    }
    else
    {
        printf("%s\n", "NO");
    }

    return 0;
}




