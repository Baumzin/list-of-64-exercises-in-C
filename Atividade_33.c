#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int NumAluno, p;
    float Nota, Somanota, Pesototal;

    for(NumAluno = 0; NumAluno <= 5; NumAluno++)
    {
        printf("\nInsira o n�mero da matr�cula do aluno: ");
        scanf("%d", &NumAluno);
        printf("\nInsira a nota do aluno %d: ", NumAluno);
        scanf("%f", &Nota);
        printf("\nInsira o peso da nota do aluno: ");
        scanf("%f", &p);
        Somanota += Nota * p;
        Pesototal += p;
    }
    printf("A m�dia das notas da sala �: %.2f", (Somanota/Pesototal));

    return 0;
}