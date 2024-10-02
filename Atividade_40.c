#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    double ind;
    char op;

    printf("Insira o Índice de poluição atual: ");
    scanf("%lf", &ind);

    do
    {
        if(ind >= 0.25 && ind < 0.3)
        {
            printf("\nOs Índices de poluição estão em %.2lf (em alerta)! Tente diminuir seu Índice\n", ind);
        }
        else if(ind >= 0.3 && ind <= 0.4)
        {
            printf("\nAlerta! Suspender todas as atividades para a empresa A!\n");
        }
        else if(ind >= 0.4 && ind < 0.5)
        {
            printf("\nAlerta! Suspender todas as atividades para a empresa A e empresa B!\n");
        }
        else if(ind >= 0.5)
        {
            printf("\nAlerta! Suspender todas as atividades de TODAS AS EMPRESAS! ! !\n");
        }

        printf("Deseja encerrar o programa?\nS - Sim\nN - Não\n");
        scanf(" %c", &op);
        
        switch (op)
        {
            case 'N':
            case 'n':
                main();
            break;
        }

    }while(op != 'S' && op != 's');

    printf("\nObrigado por usar nosso programa!\n");

    return 0;
}

//com o setlocale ativo, utilizar virgula para separar casa decimal, caso contrario, utilize .//