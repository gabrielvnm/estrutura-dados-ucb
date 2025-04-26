#include <stdio.h>
#include <string.h>

void bubbleSortAlfabetico(char v[][20], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (strcmp(v[j], v[j+1]) > 0)
            {
                char temp[20];
                strcpy(temp, v[j]);
                strcpy(v[j], v[j+1]);
                strcpy(v[j+1], temp);
            }
        }
    }
}

int main()
{
    char palavras[][20] = {"banana", "abacaxi", "laranja", "uva", "manga"};
    int len = sizeof(palavras) / sizeof(palavras[0]); //descobre quantas palavras tem.



    bubbleSortAlfabetico(palavras, len);

    printf("\nPalavras em ordem alfabetica:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%s\n", palavras[i]);
    }

    return 0;
}
