#include <stdio.h>


/*
Печать простых множителей
Составить рекурсивную функцию, печать всех простых множителей числа.
Формат входных данных
Натуральное число
Формат результата
Последовательность из всех простых делителей числа через пробел
Примеры
Входные данные
12
Результат работы
2 2 3
Входные данные
120
Результат работы
2 2 2 3 5
*/



void primeDivNumber(int num, int divisor)
{



    if ((num == 0) || (num == 1))
        return;
    if ((num % divisor) == 0)
    {
        printf("%d ", divisor);
        num /= divisor;
    }
    else
    {
        divisor += 1;
    }
    return primeDivNumber(num, divisor);

}


int main(void)
{
    int num;
    scanf("%d", &num);
    primeDivNumber(num, 2);
    return 0;
}

