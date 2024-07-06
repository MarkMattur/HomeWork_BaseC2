#include <stdio.h>
#include <inttypes.h>

/*
Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

Формат входных данных
Целое положительное число

Формат результата
Одно слово: YES или NO

Примеры

Входные данные
123
Результат работы
YES

Входные данные
1234
Результат работы
NO
*/

int main(void)
{
    uint8_t i = 0;
    uint32_t naturalNumber;
    scanf("%" SCNu32, &naturalNumber);
    while (naturalNumber != 0)
    {
        naturalNumber = naturalNumber/10;
        i++;
    } ;

    i == 3 ? printf("%s\n", "YES") : printf("%s\n", "NO");

    return 0;
}
