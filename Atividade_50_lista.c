#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    setlocale(LC_ALL, "");
    //esse time faz com que sorteie um n�mero aleatorio a cada vez que o site for inicializado//
    srand(time(NULL));
    int x, y, tentativa=0;

    /* gerando valores aleat�rios entre zero e 100 */
    x = rand() % 100;

    do
    {
        printf("Descubra o n�mero entre 0 e 100:");
        scanf("%d", &y);
        if(y > x)
        {
            printf("\nO n�mero � menor que %d\n", y);
            tentativa++;
        }
        if(y < x)
        {
            printf("\nO n�mero � maior que %d\n", y);
            tentativa++;
        }
    } while (y != x);
    
    printf("Parab�ns, voc� acertou! O n�mero era o %d e voc� errou %d vezes",x, tentativa );

    return 0;

}