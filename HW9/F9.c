//~ #include <stdio.h>

/*
Поменять местами
Составить только функцию которая в массиве находит максимальный из
отрицательных элементов и меняет его местами с последним элементом массива.
Гарантируется, что в массиве только один такой элемент или же такой элемент отсутствует.
Если отрицательных элементов нет - массив не менять.
Прототип функции: void swap_negmax_last(int size, int a[])
Формат входных данных
Функция принимает на вход размер массива и указатель на начало массива.
Массив состоит из целых чисел.
Примеры
Входные данные
1 -2 -3 -4 5 6 7 8 9 10
Результат работы
1 10 -3 -4 5 6 7 8 9 -2
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

void swap_negmax_last(int size, int a[])
{
    int negmax;
    int negmax_index;

    for(int i = 0; i < size-1; ++i)
    {
        if (a[i] < 0)
        {
            negmax = a[i];
            //~ printf("negmax1 = %d\n", negmax);
            negmax_index = i;
            //~ printf("negmax_index1 = %d\n", negmax_index);
        }
    }


    for(int i = 0; i < size-1; ++i)
    {
       if ((negmax < a[i]) && (a[i] < 0))
       {
           negmax = a[i];
           //~ printf("negmax2 = %d\n", negmax);
           negmax_index = i;
           //~ printf("negmax_index2 = %d\n", negmax_index);
       }
    }


    int temp;
    if (a[negmax_index] < 0)
    {
        temp = a[negmax_index];
        //~ printf("temp = %d\n", temp);
        a[negmax_index] = a[size-1];
        a[size-1] = temp;
    }


    //~ for (int n = 0; n <= (size - 1); n++)
    //~ {
        //~ printf("%d ", a[n]);
    //~ }
}


//~ int main()
//~ {
    //~ input();

    //~ swap_negmax_last(size, a);

    //~ return 0;
//~ }

