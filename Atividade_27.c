#include <stdio.h>
#include <locale.h>
int main()
{
     setlocale(LC_ALL, "");
    
     int fat=1, i, n, q;

     printf("Digite a quantidade de vezes que você deseja ver um número e seu fatorial :");
     scanf("%d", &q);
     do
     {
          printf("\nDigite o número para mostrar seu fatorial :");
          scanf("%d", &n);
          for(i=n; i>1; i--)
          {
               fat = fat*i;
          }
          printf("\nO fatorial de %d é: %d", n, fat);
          fat = 1;
     }while(--q > 0);

     return 0;
     
}