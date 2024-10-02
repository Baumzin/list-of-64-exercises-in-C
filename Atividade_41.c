#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int op;

    while(1)
    {
        printf("selecione a opção na qual melhor descreve sua idade :\n");
        printf("1 - 5 a 7 anos\n");
        printf("2 - 8 a 11 anos\n");
        printf("3 - 12 a 13 anos\n");
        printf("4 - 14 a 17 anos\n");
        printf("5 - maior de 18 anos\n");
        scanf("%i", &op);

        switch (op)
        {
            case 1:
                printf("Sua classificação é de INFANTIL A\n");
                return 0;
            break;
            case 2:
                printf("Sua classificação é de INFANTIL b\n");
                return 0;
            break;
            case 3:
                printf("Sua classificação é de JUVENIL A\n");
                return 0;
            break;
            case 4:
                printf("Sua classificação é de JUVENIL B\n");
                return 0;
            break;
            case 5:
                printf("Sua classificação é de ADULTOS\n");
                return 0;
            break;
            default:
                printf("Opção inválida\n");
                main();
            break;
        }
    }

    return 0;
}
    
            

