#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x, quadrado, somatorio, quant, op;
    quant = 0;
    somatorio=0;
    quadrado=0;

    printf("informe um n�mero �mpar entre 0 e 10 :\n");
    scanf("%d", &x);
    if(x >=0 && x <= 10)
    {
        printf("\no n�mero %d foi o escolhido e seu quadrado �: %d\n", x, x*x);
        if (x % 2 != 0)
        {
            do
            {
                somatorio = x + 2;
                x+=2;
                quadrado = somatorio * somatorio;
                printf("o quadrado de %d � o : %d\n", somatorio, quadrado);
                quant = quant + 1;
            }while(quant < 20);
            
        }
        else
        {
            printf("\nO n�mero � par, deseja recome�ar?\n1- Sim\n2- N�o\n");
            scanf("%d", &op);
            switch (op)
            {
                case 1:
                    main();
                break;
                case 2:
                    return 0;
                break;
            }
        }
    }
    else
    {
        printf("\nN�mero incorreto");
    }

    return 0;
}