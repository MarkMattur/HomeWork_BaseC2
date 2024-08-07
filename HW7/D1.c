#include <stdio.h>

/*
От 1 до N
Составить рекурсивную функцию, печать всех чисел от 1 до N
Формат входных данных
Одно натуральное число
Формат результата
Последовательность чисел от 1 до введенного числа
Примеры
Входные данные
5
Результат работы
1 2 3 4 5
*/

void printFunc(int i, int n)
{
    printf("%d ", i);
    if (i == n)
        return;
    printFunc(i+1, n);
}

int main()
{
    int n, i=1;
    scanf("%d", &n);
    printFunc(i, n);
    return 0;
}
