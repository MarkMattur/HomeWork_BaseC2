#include <stdio.h>

//~ Ввести номер месяца и вывести название времени года.
//~ Данные на входе: Целое число от 1 до 12 - номер месяца.
//~ Данные на выходе:     Время года на английском: winter, spring, summer, 
//~ autumn
//~ Пример №1
//~ Данные на входе: 4
//~ Данные на выходе:     spring
//~ Пример №2   
//~ Данные на входе:      1
//~ Данные на выходе:    winter


int main(void)
{
    int a;
    scanf("%d", &a);

    if (a == 1 || a == 2 || a == 12)
    {
        printf("%s\n", "winter");
    }
    else if (a == 3 || a == 4 || a == 5)
    {
        printf("%s\n", "spring");
    }
    else if (a == 6 || a == 7 || a == 8)
    {
        printf("%s\n", "summer");
    }     
    else
    {
         printf("%s\n", "autumn");
    }    
return 0;
}
