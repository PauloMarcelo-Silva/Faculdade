#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char save_names(char **names)
{
    names = malloc(4 * sizeof(char));
    for (int i = 0; i < 4; i++)
    {
        names[i] = malloc(10 * sizeof(char));
       for (int j = 0 ; j < 4 ; j++)
		   names[i][j] = getchar();
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c", names[i][j]);
        }
    }
}

int main()
{
    char **nomes;
    save_names(nomes);
}