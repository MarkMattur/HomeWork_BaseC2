#include <stdio.h>

//~ Дано трехзначное число, напечатать максимальную цифру
//~ Данные на входе:        Целое положительное трехзначное число
//~ Данные на выходе:     Одна цифра
//~ Пример
//~ Данные на входе:       435
//~ Данные на выходе:    5

int main(void)
{
    int a,b,c,y;
    scanf("%d", &y);
    
    a = y/100;
    b = (y/10)%10;
    c = y%10;
 
    a > b ? (a > c ? printf("%d\n", a ) : (printf("%d\n", c ))) :
    
            (b > c ? printf("%d\n", b ) : printf("%d\n", c ));   
        
return 0;
}

