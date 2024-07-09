#include <stdio.h>

/*
Сумма цифр четна
Составить функцию логическую функцию, которая определяет, верно ли,
что сумма его цифр – четное число. Используя эту функцию решить задачу.

Формат входных данных
Одно целое не отрицательное число

Формат результата
Ответ YES или NO

Примеры
Входные данные
136
Результат работы
YES

Входные данные
245
Результат работы
NO
*/


void even(unsigned int number)
{
    int sum = 0;

    while (number != 0)
    {
        sum += number % 10;
        number = number / 10;
    } ;

    //~ printf("number = %d sum = %d\n", number, sum);

    printf("%s\n", ((sum % 2 == 0) ? ("YES\n") : ("NO\n")));

}

int main()
{
    int num;
    scanf("%d", &num);
    even(num);

    return 0;
}


