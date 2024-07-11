#include <stdio.h>

/*
Все цифры в порядке возрастания
Ввести целое число и определить, верно ли, что все его цифры расположены
в порядке возрастания.

Формат входных данных
Целое число

Формат результата
YES или NO

Примеры

Входные данные
1238
Результат работы
YES

Входные данные
1274
Результат работы
NO

*/

int main(void)
{
    int numberDigits, number, numberStart, count = 0;
    scanf("%d", &number);
    numberStart = number;

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

    int increase = 0;
    for (int n = 1; n <= (count-1); n++)
    {
        if (digit[n] > digit[n+1])
        {
            increase += 1;
        }
    }


    if ((numberStart >= 0) && (numberStart <= 9))
    {
        printf("%s\n", "YES");
    }
    else if (increase == (count - 1))
    {
        printf("%s\n", "YES");
    }
    else
    {
        printf("%s\n", "NO");
    }

    return 0;
}

