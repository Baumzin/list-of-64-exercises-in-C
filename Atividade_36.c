#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int numero, men, quant;
    float numm = 0;
    int ma = 0;

    printf("\nVocê deverá colocar 10 números inteiros positivos\n");
    for(quant = 1; quant <= 10 ; quant++)
    {
        printf("\nInsira um número :\n");
        scanf("%d", &numero);
        if(quant == 1)
        {
            ma = men = numero;
        }
        else
        {
            (numero > ma);
            ma = numero;
        }
        if(numero < men)
        {
            men = numero;
        }
        numm += numero;

    }
    if(numero || men || ma || numm < 0)
        {
            printf("\nVocê inseriu algum número errado!\n");
            main();
        }
    printf("\nO maior número é: %d\n", ma);
    printf("\nO menor número é %d\n", men);
    printf("\nA média dos números é: %.2f\n", numm/10);

    return 0;
}