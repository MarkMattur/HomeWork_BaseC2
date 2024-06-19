#include <stdio.h>
int main(void)
{
    float a, b, c, y;
    
    scanf ("%f%f%f", &a, &b, &c);
    y = (a + b + c)/ (int)3;
    printf ("%4.2f\n", y);
    
    return 0;
}
