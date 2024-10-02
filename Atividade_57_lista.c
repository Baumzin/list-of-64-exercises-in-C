#include <stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "");

    char frase[31];
    char novafrase[31];
    int i, j = 0;

    printf("Insira a frase : ");
    fflush(stdin);
    gets(frase);
    for(i = 0; i < strlen(frase); i++)
    {
        if(frase[i] == 'a' || frase[i] == 'A')
        {
            novafrase[j++] = frase[i];
        }
        if(frase[i] == 'e' || frase[i] == 'E')
        {
            novafrase[j++] = frase[i];
        }
        if(frase[i] == 'i' || frase[i] == 'I')
        {
            novafrase[j++] = frase[i];
        }
        if(frase[i] == 'o' || frase[i] == 'O')
        {
            novafrase[j++] = frase[i];
        }
        if(frase[i] == 'u' || frase[i] == 'U')
        {
            novafrase[j++] = frase[i];
        }
    }
    novafrase[j] ='\0';

    puts(novafrase);
 
    return 0;
}