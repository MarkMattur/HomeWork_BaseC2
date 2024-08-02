#include <stdio.h>

/*
Монотонная последовательность
Дана монотонная последовательность, в которой каждое натуральное число k
встречается ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,…
Выведите первые n членов этой последовательности. Только один цикл for.
Формат входных данных
Натуральное число.
Формат результата
Последовательность целых чисел.
Примеры
Входные данные
11
Результат работы
1 2 2 3 3 3 4 4 4 4 5
*/


void seqPrint(int seqLen, int numRep)
{
    for (int i = 1; i <= numRep; i++)
    {
        printf("%d ", numRep);
        seqLen--;
        if (seqLen == 0)
        return;
    }
    seqPrint(seqLen, numRep + 1);
}

int main()
{
    int seqLen;
    scanf("%d", &seqLen);
    seqPrint(seqLen, 1);
    return 0;
}