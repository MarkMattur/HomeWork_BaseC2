#include <stdio.h>
#include <inttypes.h>

/*
Сумма цифр
Ввести целое число и найти сумму его цифр.

Формат входных данных
Одно целое число большее или равное нулю.

Формат результата
Одно число - сумма цифр

Примеры

Входные данные
1234
Результат работы
10

Входные данные
111
Результат работы
3
*/

int main(void)
{
    uint32_t number, sum = 0;

    scanf("%" SCNu32, &number);

    while (number != 0)
    {
        sum += number % 10;
        number = number / 10;
    } ;

    printf("%u\n", sum);

    return 0;
}

