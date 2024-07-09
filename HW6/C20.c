#include <stdio.h>

/*
Формат входных данных
На вход подается строка состоящая из символов '(', ')'
и заканчивающаяся символом '.'. Размер строки не более 1000 символов.

Формат результата
Необходимо напечатать слово YES если скобки расставлены верно и NO в противном случае.

Примеры
Входные данные
(()()).
Результат работы
YES

Входные данные
()(.
Результат работы
NO
*/


int main ()
{
    char character;
    int count = 0;
    do
    {
        character = getchar();

        if (character == '(')
        {
            count++;
        }
        else if (character == ')')
        {
            count--;
        }

        if (count == -1)
        {
                printf("%s\n", "NO\n");
                return 0;
        }
    } while (character != '.');

    printf("%s\n", (count % 2) ? "NO\n" : "YES\n");

  return 0;
}
