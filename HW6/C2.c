#include <stdio.h>


/*
Возвести в степень
Составить функцию, возведение числа N в степень P. int power(n, p)
и привести пример ее использования.
Формат входных данных
Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0
Формат результата
Одно целое число
Примеры
Входные данные
8 3
Результат работы
512
Входные данные
-5 2
Результат работы
25
*/

int power(int n, int p)
{
    static long long int result = 1;

    for (int i = 1; i <= p; i++)
    {
        result *= n;
    }

    if (p == 0)
    {
        return (1);
    }
    return (result);

}


int main()
{
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d", power(n, p));
    return 0;
}
