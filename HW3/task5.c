#include <stdio.h>
int main(void)
{
    int a, y;
    
    scanf ("%d", &a);
    y = (a/100) * ((a/10)%10) * (a%10);
    printf ("%d\n", y);
    
    return 0;
}

