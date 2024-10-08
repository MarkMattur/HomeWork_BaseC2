#include <stdio.h>
#include <string.h>

/*

Строка и цифры
Считать число N из файла input.txt.
Сформировать строку из N символов.
N четное число, не превосходящее 26.
На четных позициях должны находится четные цифры в порядке возрастания, кроме 0,
на нечетных позициях - заглавные буквы в порядке следования в английском алфавите.
Результат записать в файл output.txt
Формат входных данных
Четное N ≤ 26
Формат результата
Строка из английских букв и цифр
Примеры
Входные данные в файле input.txt
10
Результат работы в файле output.txt
A2B4C6D8E2
Входные данные в файле input.txt
16
Результат работы в файле output.txt
A2B4C6D8E2F4G6H8

*/



int main(){
int i, n;

FILE *f_in, *f_out;
char name_in[] = "input.txt";
char name_out[] = "output.txt";
    f_in = fopen(name_in, "r");
    f_out = fopen(name_out, "w");

    fscanf(f_in, "%d", &n);

char str[n + 2];
char c = 'A';
char c_num = '2';
    for (i = 0; i < n; ++i)
    {
        if (i%2==0)
            str[i] = c++;
        else
        {
            str[i] = c_num;
            if (c_num == '8')
                c_num = '2';
            else
                c_num += 2;
        }
    }

    str[i] = '\0';
    fprintf(f_out, "%s", str);
    fclose(f_in);
    fclose(f_out);
    return 0;
}
