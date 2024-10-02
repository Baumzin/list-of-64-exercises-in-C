#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int a,b,c;
    
    printf("insira seu 1º número inteiro maior que 0 :");
    scanf("%d",&a);

    printf("insira seu 2º número inteiro maior que 0 :");
    scanf("%d",&b);

    printf("insira seu 3º número inteiro maior que 0 :");
    scanf("%d",&c);

    if((a<=0)||(b<=0)||(c<=0))
    {
        printf("Valores incorretos, insira-os novamente");
    }
    
    if ((a>b)&&(a>c)&&(b>c))
    {
        printf("%d x %d = %d",c,a,c*a);
        printf("\n%d/%d = %d",a,c,a/c);
    }

    else if((a>b)&&(a>c)&&(c>b))
    {
        printf("%d x %d = %d",b,a,b*a);
        printf("\n%d/%d = %d",a,b,a/b);
    }

    else if((b>a)&&(b>c)&&(a>c))
    {
        printf("%d x %d = %d",c,b,c*b);
        printf("\n%d/%d = %d",b,c,b/c);
    }

    else if((b>a)&&(b>c)&&(c>a))
    {
        printf("%d x %d = %d",a,b,a*b);
        printf("\n%d/%d = %d",b,a,b/a);
    }

    else if((c>a)&&(c>b)&&(a>b))
    {
        printf("%d x %d = %d",b,c,b*c);
        printf("\n%d/%d = %d",c,b,c/b);
    }
    else if((c>a)&&(c>b)&&(b>a))
    {
        printf("%d x %d = %d",a,c,a*c);
        printf("\n%d/%d = %d",c,a,c/a);
    }  

    return 0;
}