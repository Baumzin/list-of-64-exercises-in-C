#include <stdio.h>
#include <locale.h>
int main(){
    setlocale (LC_ALL, "");
    int a,b;

    printf("Insira seu primeiro valor :");
    scanf("%d",&a);

    printf("insira o seu segundo valor :");
    scanf("%d",&b);

    printf("0 é falso, 1 é verdadeiro :");

    printf("\n %d = %d é %d",a,b,a==b);
    printf("\n %d diferente de %d é %d",a,b,a!=b);
    printf("\n %d é maior que %d é %d",a,b,a > b);
    printf("\n %d é menor que %d é %d",a,b,a < b);
    printf("\n %d é maior ou igual que %d é %d",a,b,a>=b);
    printf("\n %d é menor ou igual que %d é %d",a,b,a<=b);

    return 0;

}
