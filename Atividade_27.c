#include <stdio.h>
#include <locale.h>
int main()
{
     setlocale(LC_ALL, "");
    
     int fat=1, i, n, q;

     printf("Digite a quantidade de vezes que voc� deseja ver um n�mero e seu fatorial :");
     scanf("%d", &q);
     do
     {
          printf("\nDigite o n�mero para mostrar seu fatorial :");
          scanf("%d", &n);
          for(i=n; i>1; i--)
          {
               fat = fat*i;
          }
          printf("\nO fatorial de %d �: %d", n, fat);
          fat = 1;
     }while(--q > 0);

     return 0;
     
}