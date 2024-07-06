#include <stdio.h>
#include <inttypes.h>
/*
Две одинаковые цифры
Ввести целое число и определить, верно ли, что в его записи есть
две одинаковые цифры, НЕ обязательно стоящие рядом.

Формат входных данных
Одно целое число

Формат результата
Одно слово: YES или NO

Примеры

Входные данные
1234
Результат работы
NO

Входные данные
1242
Результат работы
YES
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

    int dubles = 0;

    for (int n = 1; n <= (count-1); n++)
    {
        for (int k = (n + 1); k <= count; k++)
        {
            if (digit[n] == digit[k])
            {
                dubles = 1;
            }
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


