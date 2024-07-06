#include <stdio.h>
#include <inttypes.h>

/*
Ровно одна цифра 9
Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».

Формат входных данных
Одно целое число

Формат результата
Ответ: YES или NO

Примеры

Входные данные
193
Результат работы
YES

Входные данные
1994
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

    int dubles = 0;
    for (int n = 1; n <= count; n++)
    {
        if (digit[n] == 9)
        {
            dubles += 1;
        }
    }

    if (dubles == 1)
    {
        printf("%s\n", "YES");
    }
    else
    {
        printf("%s\n", "NO");
    }

    return 0;
}


