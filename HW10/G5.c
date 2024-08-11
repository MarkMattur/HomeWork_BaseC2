#include <stdio.h>
#include <string.h>


/*

Заменить a на b
В файле input.txt дана символьная строка не более 1000 символов.
Необходимо заменить все буквы "а" на буквы "b" и наоборот,
как заглавные, так и строчные. Результат записать в output.txt.
Формат входных данных
Строка из маленьких и больших английских букв, знаков препинания и пробелов.
Формат результата
Строка из маленьких и больших английских букв, знаков препинания и пробелов.
Примеры
Входные данные в файле input.txt
aabbccddABCD
Результат работы в файле output.txt
bbaaccddBACD

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
    for (i = 0; i < count; ++i)
    {
        if (line[i] == 'a')
            str[i] = 'b';
        else if (line[i] == 'b')
            str[i] = 'a';
        else if (line[i] == 'A')
            str[i] = 'B';
        else if (line[i] == 'B')
            str[i] = 'A';
        else
            str[i] = line[i];
    }
    str[i] = '\0';
    fprintf(fp, "%s", str);
    fclose(fp);
    return 0;
}
