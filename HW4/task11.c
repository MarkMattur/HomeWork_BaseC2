#include <stdio.h>

//~ Даны стороны треугольника a, b, c. Определить   существует ли такой 
//~ треугольник. Для того чтобы треугольник существовал, сумма длин 
//~ любых двух сторон должна быть больше длины третьей стороны.
//~ Данные на входе: Три целых числа. Стороны треугольника a, b, c.
//~ Данные на выходе:     YES или NO

//~ Пример  
//~ Данные на входе:      3 2 4
//~ Данные на выходе:     YES


int main(void)
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    (a + b > c)&&(b + c > a)&&(c + a > b) ? printf("%s\n", "YES") : printf("%s\n", "NO"); 
        
return 0;
}
