#include <stdio.h>


/*

Три раза
В файле input.txt дана строка. Вывести ее в файл output.txt
три раза через запятую и показать количество символов в ней.
Формат входных данных
Строка из английских букв и пробелов. Не более 100 символов.
В конце могут быть незначащие переносы строк.
Формат результата
Исходная строка 3 раза подряд, через запятую пробел и количество символов в ней.
Примеры
Входные данные в файле input.txt
aab
Результат работы в файле output.txt
aab, aab, aab 3

*/


const int line_width = 256;

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_width];
char c;
FILE *fp;


    if((fp = fopen(input_fn, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }


int count = 0;
    while(((c = getc(fp)) != EOF) && (c != '\n'))
        line[count++] = c;
    line[count] = '\0';

    fclose(fp);


    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }


    for (int i = 0; i < 3; i++)
    {
        if (i)
            fprintf(fp, ", ");
        fprintf(fp, "%s", line);
    }
    fprintf(fp, " %d", count);
    fclose(fp);
    return 0;
}
