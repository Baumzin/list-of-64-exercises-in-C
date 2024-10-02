#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x=0;
    //primeiro, criamos um do while para que o programa se repita ao menos uma vez e feche caso o usuário digite -1//
    do
    {
        int max=5;
        int v[max], i, digito, soma1=0, soma3=0, soma4=0;

        //agora, lemos os números presentes em cada indice do vetor//
        for(i=0; i < max; i++)
        {
            printf("Digite um valor: ");
            scanf("%d", &v[i]);

            //para não haver um risco de alter o indice original, criamos uma cópia para que ele analise cada elemento sem alterar a quantidade de elementos//
            int copia=0;
            copia=v[i];

            //aqui, fazemos com que, enquanto o nÃºmero do vetor for maior ou igual a 0, ele busque cada digito do número para ver se é o 1, 3 ou 4// 
            while (copia> 0)
            {
                digito = copia % 10;
                if (digito == 1)
                {
                    soma1++;
                }
                if (digito == 3)
                {
                    soma3++;
                }
                if (digito == 4)
                {
                    soma4++;
                }
                //aqui dividimos por 10 para que consiga analisar a proxima casa decimal, até que chegue a 0 ou menos//
                copia/=10;
            }
            
        }

        printf("\nEm todo o vetor, houve %d aparições do 1, %d aparições do 3 e %d aparições do 4\n", soma1, soma3, soma4);
        printf("\nCaso deseje encerrar o programa, digite -1, se não, pressione outro número e continue:\n");
        scanf("%d", &x);

    } while (x != -1);
    
    return 0;
}