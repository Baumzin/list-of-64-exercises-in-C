#include <stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "");
    // aqui definimos o tamanho da frase (50 caracteres) e o branco para mostrar os espa�os em branco
    char frase[51];
    int i, j, branco=0;

    //aqui pedimos ao usuario digitar a frase, o fflush limpa a variavel frase e depois coletamos o que foi digitado
    printf("Insira a frase desejada (m�ximo de 50 letras):\n");
    fflush(stdin);
    gets(frase);
    //aqui definimos o i igual a 0 para que analise cada letra da frase//
    for(i = 0; i <strlen(frase); i++)
    {
        //Caso a posi��o da frase n�o seja um espa�o em branco, a variavel j ira pular o caracter//
        if(frase[i] != ' ')
        {
            frase[j++] = frase[i];
        }
        else
        {
            //caso seja um espa�o em branco, apenas adicione na variavel branco//
            branco++;
        }
    }
    // aqui n�s eliminamos os espa�os em branco da frase digitada// 
    frase[j] = '\0';
    puts(frase);
    printf("\nHouve %d espa�os em branco", branco);

    return 0;
}