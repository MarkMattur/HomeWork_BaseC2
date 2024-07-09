#include <stdio.h>

/*
Цифры по возрастанию
Составить функцию логическую функцию, которая определяет,
верно ли, что в заданном числе все цифры стоят по возрастанию.

Используя данную функцию решить задачу.
int grow_up(int n)

Формат входных данных
Одно целое не отрицательное число

Формат результата
YES или NO

Примеры
Входные данные
258
Результат работы
YES

Входные данные
528
Результат работы
NO
*/


int grow_up(int n)
{
    int result, digits, flag, counter = 0;
    result = digits = 0;
    flag = 0;

    while (n > 0)
    {
        digits = n % 10;
        if (result > digits)
        {
            counter++;
        }

        //~ printf("result = %d digits = %d flag = %d counter = %d\n",
                                    //~ result, digits, flag, counter);
        result = digits;
        n = n / 10;

        flag++;
    } ;

      //~ printf("flag = %d counter = %d\n", flag, counter);

    if ( flag == (counter + 1) )
    {
         return 1;
    }
    return 0;


}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%s\n", "YES\n");
    }
    else
    {
        printf("%s\n", (grow_up(n) ? ("YES\n") : ("NO\n")));
    }

    return 0;
}



