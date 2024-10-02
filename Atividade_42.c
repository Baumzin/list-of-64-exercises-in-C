#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int q, n, mai, men, p;

    printf("selecione a quantidade de números que devem ser comparados :");
    scanf("%d", &q);

    printf("digite um número :");
    scanf("%d", &n);
    mai = n;
    men = n;

    if (q == 1)
    {
        printf("não há comparação pois só há 1 número sendo comparado!\n");
        
    }
    else
    {
        do
        {
            printf("digite um número :");
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

    printf("maior número: %d\n", mai);
    printf("menor número: %d\n", men);

    while (1)
    {
        printf("Para parar a execução, digite 0, se não, pressione qualquer número:\n");
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