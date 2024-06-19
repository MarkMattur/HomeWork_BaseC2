#include <stdio.h>
int main(void)
{
    int a, b, c, y;
    
    scanf ("%d%d%d", &a, &b, &c);
    y = a + b + c;
    printf ("%d+%d+%d=%d\n", a, b, c, y );
    
    y = a * b * c;
    printf ("%d*%d*%d=%d\n", a, b, c, y );

    return 0;
}
