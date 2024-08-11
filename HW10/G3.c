#include <stdio.h>

/*

Последний номер символа
В файле input.txt дана строка из 1000 символов.
Показать номера символов, совпадающих с последним символом строки.
Результат записать в файл output.txt
Формат входных данных
Строка не более 1000 символов
Формат результата
Целые числа через пробел - номера символа, который совпадает с последним символом строки.
Примеры
Входные данные в файле input.txt
aabbcdb
Результат работы в файле output.txt
2 3

*/

const int line_width = 1000;

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_width];
char c, cLast;
FILE *fp;


    if((fp = fopen(input_fn, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }


int count = 0;
    while(((c = getc(fp)) != EOF) && (c != '\n'))
        {
            cLast = c;
            line[count++] = c;
        }

    line[count] = '\0';


    fclose(fp);


    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }


    for (int i = 0; i < count-1; i++)
    {
        //~ fprintf(fp, "line = %s pos = %d\n", line, i);
        if (line[i] == cLast)
            fprintf(fp, "%d ", i);
    }

    //~ fprintf(fp, " %d", count);

    //~ fprintf(fp, "\ncLast = %d", cLast);

    fclose(fp);
    return 0;
}
