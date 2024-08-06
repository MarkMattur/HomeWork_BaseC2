//~ #include <stdio.h>

/*
Поменять местами
Составить функцию которая меняет в массиве минимальный и максимальный элемент местами.
Прототип функции void change_max_min(int size, int a[])
Формат входных данных
Функция принимает на вход размер массива и массив чисел типа int
Формат результата
Функция не возвращает значения, измененный массив сохраняется на месте исходного.
Примеры
Входные данные
1 2 3 4 5 6 7 8 9 10
Результат работы
10 2 3 4 5 6 7 8 9 1
*/



//~ int size = 10;
//~ int a[10];

//~ int input()
//~ {
    //~ for (int n = 0; n <= (size - 1); n++)
    //~ {
        //~ scanf("%d", &a[n]);
    //~ }
    //~ return a[size];
//~ }

void change_max_min(int size, int a[])
{
    int max_array = a[0];
    int max_index = 0;
    for(int i = 1; i < size; ++i)
    {
       if (max_array < a[i])
       {
           max_array = a[i];
           max_index = i;
       }
    }

    int min_array = a[0];
    int min_index = 0;
    for(int i = 1; i < size; ++i)
    {
       if (min_array > a[i])
       {
           min_array = a[i];
           min_index = i;
       }
    }

    int temp;
    temp = a[max_index];
    a[max_index] = a[min_index];
    a[min_index] = temp;

    //~ for (int n = 0; n <= (size - 1); n++)
    //~ {
        //~ printf("%d ", a[n]);
    //~ }
}


//~ int main()
//~ {
    //~ input();

    //~ change_max_min(size, a);

    //~ return 0;
//~ }
