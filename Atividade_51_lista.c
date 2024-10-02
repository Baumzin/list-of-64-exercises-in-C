#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i, tamanho=0, acima=0, abaixo=0;
    double nota=0, soma=0;

    //aqui definimos o tamanho do vetor//
    printf("Insira a quantidade de alunos:");
    scanf("%d", &tamanho);

    for(i=0;i<tamanho;i++)
    {
        printf("Insira a nota do aluno %d:", i+1);
        scanf("%lf", &nota);
        soma+=nota;
        if(nota > 7)
            acima++;
        else
        {
            if(nota < 5)
            abaixo++;
        }
    }
    
    printf("\n A média da sala foi de %.2lf\n", soma/i);
    if(acima >= 1)
    {
        printf("Houve %d alunos que tiraram nota acima de 7", acima);
    }
    else
    {
        printf("Não há alunos com nota acima de 5");
    }
  
    return 0;
}