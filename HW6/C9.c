#include <stdio.h>

/*
Факториал
Составить функцию вычисления N!.
Использовать ее при вычислении факториала
int factorial(int n)

Формат входных данных
Целое положительное число не больше 20

Формат результата
Целое положительное число

Примеры
Входные данные
5
Результат работы
120
*/


unsigned long long int factorial(int n)
{
    unsigned long long int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    };
    return (result);

}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%llu", factorial(n));
    return 0;
}
