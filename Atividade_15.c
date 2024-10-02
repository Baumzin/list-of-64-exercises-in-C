#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    float n1,n2,n3,n4,rec,nmed,med;

    printf("Insira as suas 4 notas que você obteve nas provas :");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    if ((n1+n2+n3+n4)/4>=7)
    {
        printf("Parabéns, você foi aprovado pelo conselho com nota :%f",(n1+n2+n3+n4)/4);
    }
    else
    {
        printf("Que pena, você não foi aprovado pelo conselho, mas tente passar com a nota de recuperaçãoo:");
        scanf("%f",&rec);

        med = (n1+n2+n3+n4)/4;
        nmed = (med+rec)/2;

        if(nmed>=7)
        {
            printf("Essa foi por pouco, você passou pela recuperação com :%f",nmed);
        }
        else
        {
            printf("Infelizmente nem com recuperação você foi aprovado. . . Sua nota foi :%f",nmed);
        }
    }
    
    return 0;
}