#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int codigo;

    printf("insira o c�digo :");
    scanf("%d",&codigo);

    switch(codigo)
    {
        case 1:
            printf("um");
            break;
        case 2:
            printf("dois");
            break;
        case 3:
            printf("tr�s");
            break;
        default:
            printf("c�digo incorreto, insira-o novamente");
            break;
    }

    return 0;

}