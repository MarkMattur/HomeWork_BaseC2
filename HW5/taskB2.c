#include <stdio.h>
#include <inttypes.h>

//~ Квадраты чисел
//~ Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.
//~ Формат входных данных
//~ Два целых числа по модулю не больше 100
//~ Формат результата
//~ Квадраты чисел от a до b.
//~ Примеры
//~ Входные данные
//~ 4 5
//~ Результат работы
//~ 16 25
//~ Входные данные
//~ 1 5
//~ Результат работы
//~ 1 4 9 16 25



int main(void)
{
    uint8_t naturalNumberLower, naturalNumberUpper;
    scanf("%" SCNu8 "%" SCNu8, &naturalNumberLower, &naturalNumberUpper);

    for (uint8_t i = naturalNumberLower; i <= naturalNumberUpper; i++)
    {
        printf("%" PRIu8 " ", i*i);
    }

    return 0;
}
