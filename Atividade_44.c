#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int op;
    float cel, fah, h, PesoIdeal, k;

    printf("Escolha uma das operacoes a seguir:\n");
    printf("1- Convers�o de Graus Celsius para Fahrenheit\n");
    printf("2- Convers�o de Graus Fahrenheit para Celsius\n");
    printf("3- Peso ideal do homem\n");
    printf("4- peso ideal da mulher\n");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            printf("Insira a temperatura em graus Celsius :");
            scanf("%f",&cel);
            printf("A temperatura de Celsius para Fahrenheit � de :%f",(9*cel+160)/5);
        break;
        case 2:
            printf("Insira a temperatura em graus Fahrenheit :");
            scanf("%f",&fah);
            printf("A temperatura de Fahrenheit para Celsius � de :%f",(fah-32)*5/9);
        break;
        case 3:
            printf("Insira sua altura em metros:");
            scanf("%f", &h);
            printf("\ninsira o seu peso em kg:");
            scanf("%f", &k);
            PesoIdeal = (72.7 * h) - 58;
            printf("Seu peso ideal � de %.2fkg ", PesoIdeal);
            if (PesoIdeal > k)
            {
                printf("\nVoc� est� abaixo do seu peso ideal\n");
            }
            else
            {
                if(PesoIdeal < k)
                {
                    printf("\nVoc� est� acima do seu peso ideal\n");
                }
                else
                {
                    printf("\nVoc� est� no seu peso ideal!\n");
                }
            }
        break;
        case 4:
            printf("Insira sua altura em metros:");
            scanf("%f", &h);
            printf("\ninsira o seu peso em kg:");
            scanf("%f", &k);
            PesoIdeal = (62.1 * h) - 44.7;
            printf("Seu peso ideal � de %.2f kg", PesoIdeal);
            if (PesoIdeal < k)
            {
                printf("\nVoc� est� abaixo do seu peso ideal\n");
            }
            else
            {
                if(PesoIdeal > k)
                {
                    printf("\nVoc� est� acima do seu peso ideal\n");
                }
                else
                {
                    printf("\nVoc� est� no seu peso ideal!\n");
                }
            }
            
            
        break;
    }
}