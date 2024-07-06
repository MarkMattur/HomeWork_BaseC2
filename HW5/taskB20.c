#include <stdio.h>

/*Проверка на простоту
Проверить число на простоту.
Формат входных данных
Натуральное число
Формат результата
Если число является простым напечатать YES, иначе NO
Примеры
Входные данные
10
Результат работы
NO
Входные данные
7
Результат работы
YES
*/


int main(void)
{
    unsigned int number;
    unsigned int even = 0;
    scanf("%u", &number);

    if ((number == 0) || (number == 1))
    {
        printf("%s\n", "NO");
    }
    else
    {
        for (int n = 1; n <= number; n++)
        {
            if ((number % n) == 0)
            {
                even += 1;
            }
        }

        if ((even) == 2)
        {
            printf("%s\n", "YES");
        }
        else
        {
            printf("%s\n", "NO");
        }
    }

    return 0;
}
