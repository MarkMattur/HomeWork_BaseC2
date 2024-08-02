#include <stdio.h>
#include <inttypes.h>
/*
Цифры по порядку
Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N.
Формат входных данных
Одно натуральное число N
Формат результата
Цифры через пробел
Примеры
Входные данные
54412
Результат работы
5 4 4 1 2
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


    for (int n = count; n >= 1; n--)
    {
        printf("%d ", digit[n]);
    }


    return 0;
}



