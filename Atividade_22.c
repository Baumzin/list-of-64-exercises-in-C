#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"");

    int a,b,c;

    printf("insira o n�mero desejado :");
    scanf("%d",&c);

    if(c>=0)
    {
        a = c;
    }
    else
    {
        b = c;
    }
    printf("Seu valor � :%d",c);


    return 0;
    
    
}
