#include <stdio.h>
#include <string.h>

/*

Количество букв
В файле input.txt считать символьную строку, не более 10 000 символов.
Посчитать количество строчных (маленьких) и прописных (больших) букв в
введенной строке. Учитывать только английские буквы. Результат записать в файл output.txt.
Формат входных данных
Строка состоящая из английских букв, цифр, пробелов и знаков препинания.
Формат результата
Два целых числа. Количество строчных букв и количество заглавных букв.
Примеры
Входные данные в файле input.txt
aabbAB
Результат работы в файле output.txt
4 2
Входные данные в файле input.txt
HELLO WORLD
Результат работы в файле output.txt
0 10

*/

const int line_width = 10000;

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_width];
char c;
FILE *fp;
int i;


    if((fp = fopen(input_fn, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }


int count = 0;
    while(((c = getc(fp)) != EOF) && (c != '\n'))
        {
            line[count++] = c;
        }

    line[count] = '\0';


    fclose(fp);


    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }

int small = 0, big = 0;
    for (i = 0; i < count; ++i)
    {
        if ((line[i] >= 'a') && (line[i] <= 'z'))
            small++;
        else if ((line[i] >= 'A') && (line[i] <= 'Z'))
            big++;
    }

    fprintf(fp, "%d %d", small, big);
    fclose(fp);
    return 0;
}

