#include <stdio.h>
#include <string.h>


/*

Удалить повторяющиеся символы
В файле input.txt строка из меленьких и больших английских букв,
знаков препинания и пробелов. Требуется удалить из нее повторяющиеся символы и все пробелы.
Результат записать в файл output.txt.
Формат входных данных
Строка из меленьких и больших английских букв, знаков препинания и пробелов.
Размер строки не более 1000 сивмолов.
Формат результата
Строка из меленьких и больших английских букв.
Примеры
Входные данные в файле input.txt
abc cde def
Результат работы в файле output.txt
abcdef

*/


const int line_width = 1000;

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

    char str[count + 2];

    //~ str[0] = line[0];
    char g;
    int j = 0;
    for (i = 0; i <= count; ++i)
    {
        g = line[i];
        if (strchr(str,g) == NULL && g != ' ')
        {
            str[j] = g;
            j++;
        }
    }

    str[j] = '\0';

    fprintf(fp, "%s\n", str);
    fclose(fp);
    return 0;
}
