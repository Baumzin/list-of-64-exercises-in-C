#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int q, n, mai, men, p;

    printf("selecione a quantidade de n�meros que devem ser comparados :");
    scanf("%d", &q);

    printf("digite um n�mero :");
    scanf("%d", &n);
    mai = n;
    men = n;

    if (q == 1)
    {
        printf("n�o h� compara��o pois s� h� 1 n�mero sendo comparado!\n");
        
    }
    else
    {
        do
        {
            printf("digite um n�mero :");
            scanf("%d", &n);
            if (n > mai)
            {
                mai = n;
            }
            else if (n < men)
            {
                men = n;
            }
        } while (--q > 1);
    }

    printf("maior n�mero: %d\n", mai);
    printf("menor n�mero: %d\n", men);

    while (1)
    {
        printf("Para parar a execu��o, digite 0, se n�o, pressione qualquer n�mero:\n");
        scanf("%d", &p);
        if (p == 0)
        {
            return 0;
        }
        else
        {
            main();
        }
    }
}