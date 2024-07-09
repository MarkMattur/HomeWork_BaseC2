#include <stdio.h>

/*
НОД
Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования.
int nod(int a, int b)
Формат входных данных
Два целых положительных числа
Формат результата
Одно целое число - наибольший общий делитель.
Примеры
Входные данные
14 21
Результат работы
7
*/

int nod(int nodMin, int nodMax)
{
    int temp;

    while (nodMin>0 && nodMax>0)
    {
        temp = nodMin;
        nodMin = (nodMin > nodMax) ? nodMin % nodMax : nodMax % nodMin;
        nodMax = temp;
    }


    return (nodMax);

}

int main()
{
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d", nod(n, p));
    return 0;
}


