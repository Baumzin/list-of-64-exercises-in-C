#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int numero, men, quant;
    float numm = 0;
    int ma = 0;

    printf("\nVoc� dever� colocar 10 n�meros inteiros positivos\n");
    for(quant = 1; quant <= 10 ; quant++)
    {
        printf("\nInsira um n�mero :\n");
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
            printf("\nVoc� inseriu algum n�mero errado!\n");
            main();
        }
    printf("\nO maior n�mero �: %d\n", ma);
    printf("\nO menor n�mero � %d\n", men);
    printf("\nA m�dia dos n�meros �: %.2f\n", numm/10);

    return 0;
}