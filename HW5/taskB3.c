#include <stdio.h>
#include <inttypes.h>

//~ Сумма квадратов маленьких чисел
//~ Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.

//~ Формат входных данных
//~ Два целых числа по модулю не больше 100

//~ Формат результата
//~ Сумма квадратов от первого введенного числа до второго

//~ Примеры

//~ Входные данные
//~ 4 10
//~ Результат работы
//~ 371

//~ Входные данные
//~ 1 5
//~ Результат работы
//~ 55



int main(void)
{
    int8_t NumberLower, NumberUpper;
    scanf("%" SCNu8 "%" SCNu8, &NumberLower, &NumberUpper);

    int32_t sum = 0;
    for (int8_t i = NumberLower; i <= NumberUpper; i++)
    {
        sum += i*i;
    }

    printf("%" PRId8 "\n", sum);

    return 0;
}
