#include <stdio.h>
#include <locale.h>
int main(){
    setlocale (LC_ALL, "");
    int a,b;

    printf("Insira seu primeiro valor :");
    scanf("%d",&a);

    printf("insira o seu segundo valor :");
    scanf("%d",&b);

    printf("0 � falso, 1 � verdadeiro :");

    printf("\n %d = %d � %d",a,b,a==b);
    printf("\n %d diferente de %d � %d",a,b,a!=b);
    printf("\n %d � maior que %d � %d",a,b,a > b);
    printf("\n %d � menor que %d � %d",a,b,a < b);
    printf("\n %d � maior ou igual que %d � %d",a,b,a>=b);
    printf("\n %d � menor ou igual que %d � %d",a,b,a<=b);

    return 0;

}
