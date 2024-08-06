//~ #include <stdio.h>

/*
Четные в начало
Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные.
Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.
void sort_even_odd(int n, int a[])
Формат входных данных
Функцийя принмате на вход целые числа
Формат результата
Отсортированный исходный массив
Примеры
Входные данные
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Результат работы
20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1
Входные данные
1 0 1 0 1
Результат работы
0 0 1 1 1
*/

//~ int size = 20;
//~ int a[20];

//~ int input()
//~ {
    //~ for (int n = 0; n <= (size - 1); n++)
    //~ {
        //~ scanf("%d", &a[n]);
    //~ }
    //~ return a[size];
//~ }

void sort_even_odd(int n, int a[])
{
    int temp[n];
    int index = 0;
    for (int k = 0; k <= (n - 1); k++)
    {
       temp[k] = a[k];
       //~ printf("temp[%d] = %d\n", k, temp[k]);
    }

    for (int i = 0; i <= n - 1; i++)
    {
        if (((temp[i]) % 2) == 0)
        {
            a[index] = temp[i];
            //~ printf("index[] = %d\n", index);
            //~ printf("i = %d\n", i);
            index++;

        }
    }
    for (int j = 0; j <= n - 1; j++)
    {
        if (((temp[j]) % 2) != 0)
        {
            a[index] = temp[j];
            //~ printf("index[] = %d\n", index);
            //~ printf("j = %d\n", j);
            index++;

        }
    }

    //~ for (int m = 0; m <= (n - 1); m++)
    //~ {
        //~ printf("%d ", a[m]);
    //~ }
}


//~ int main()
//~ {

    //~ input();

    //~ sort_even_odd(size, a);

    //~ return 0;
//~ }
