#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int a,b;

    printf("Atribua um valor � sua vari�vel a :");
    scanf("%d",&a);

    printf("Atribua um valor � sua vari�vel b :");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Agora, os valores foram trocados entre as vari�veis :\n a = %d \n b = %d",a,b);

    return 0;

}