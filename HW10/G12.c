#include <stdio.h>
#include <string.h>

/*
Разобрать на слова
В файле input.txt дано предложение требуется разобрать его на отдельные слова.
Напечатать каждое слово на отдельной строке в файл output.txt.
Формат входных данных
Одна строка из английских букв и пробелов не более 1000 символов.
Формат результата
Каждое слово на отдельной строке
Примеры
Входные данные в файле input.txt
Mama mila ramu
Результат работы в файле output.txt
Mama
mila
ramu
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
    int j = 0;
    str[-1] = '\n';
    for (i = 0; i <= count; ++i)
    {
        if ((line[i] == ' ') && (str[j-1] != '\n'))
        {
            str[j] = '\n';
            j++;
        }
        else if (line[i] != ' ')
        {
            str[j] = line[i];
            j++;
        }
    }

    str[j] = '\0';

    fprintf(fp, "%s\n", str);
    fclose(fp);
    return 0;
}
