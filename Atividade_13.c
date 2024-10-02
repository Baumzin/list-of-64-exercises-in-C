#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int a,b,c;

    printf("Insira seu 1� n�mero inteiro :");
    scanf("%d",&a);
    printf("Insira seu 2� n�mero inteiro :");
    scanf("%d",&b);
    printf("Insira seu 3� n�mero inteiro :");
    scanf("%d",&c);

    // para descobrir esse && eu pesquisei v�deos no Youtube :D//

    if(a>b && b>c)
    {
        printf("%d\n%d\n%d",a,b,c);
    }

    if(a>c && c>b)
    {
        printf("%d\n%d\n%d",a,c,b);
    }

    if(b>a && a>c)
    {
        printf("%d\n%d\n%d",b,a,c);
    }

    if(b>c && c>a)
    {
        printf("%d\n%d\n%d",b,c,a);
    }

    if(c>a && a>b)
    {
        printf("%d\n%d\n%d",c,a,b);
    }

    if(c>b && b>a)
    {
        printf("%d\n%d\n%d",c,b,a);
    }

    return 0;
}
    
