#include <stdio.h>
#include <string.h>

/*

Проверка на палиндром
В файле input.txt символьная строка не более 1000 символов.
Необходимо проверить, является ли она палиндромом
(палиндром читается одинаково в обоих направлениях).
Реализовать логическую функцию is_palindrom(str) и записать ответ в файл output.txt.
Формат входных данных
Строка из заглавных английских букв
Формат результата
YES или NO
Примеры
Входные данные в файле input.txt
ABCDEF
Результат работы в файле output.txt
NO
Входные данные в файле input.txt
KAZAK
Результат работы в файле output.txt
YES

*/

const int line_width = 1024;

int is_palindrome(char * line)
{
int len = strlen(line);
    for (int i = 0; i < len / 2; i++)
        if (line[i] != line[len - i - 1])
            return 0;
    return 1;
}

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_width];
FILE *fp;


    fp = fopen(input_fn, "r");
    fscanf(fp, "%[^\n]", line);
    fclose(fp);


    fp = fopen(output_fn, "w");
    fprintf(fp, "%s", is_palindrome(line) ?  "YES" : "NO");
    fclose(fp);
    return 0;
}
