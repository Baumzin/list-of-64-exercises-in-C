#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    setlocale(LC_ALL, "");
    //esse time faz com que sorteie um número aleatorio a cada vez que o site for inicializado//
    srand(time(NULL));
    int x, y, tentativa=0;

    /* gerando valores aleatórios entre zero e 100 */
    x = rand() % 100;

    do
    {
        printf("Descubra o número entre 0 e 100:");
        scanf("%d", &y);
        if(y > x)
        {
            printf("\nO número é menor que %d\n", y);
            tentativa++;
        }
        if(y < x)
        {
            printf("\nO número é maior que %d\n", y);
            tentativa++;
        }
    } while (y != x);
    
    printf("Parabéns, você acertou! O número era o %d e você errou %d vezes",x, tentativa );

    return 0;

}