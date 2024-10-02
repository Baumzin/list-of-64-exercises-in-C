#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int x;

    printf("insira o número para exibir sua tabuada :");
    scanf("%d", &x);

    printf("%d x 1 = %d\n", x, x*1);
    printf("%d x 2 = %d\n", x, x*2);
    printf("%d x 3 = %d\n", x, x*3);
    printf("%d x 4 = %d\n", x, x*4);
    printf("%d x 5 = %d\n", x, x*5);
    printf("%d x 6 = %d\n", x, x*6);
    printf("%d x 7 = %d\n", x, x*7);
    printf("%d x 8 = %d\n", x, x*8);
    printf("%d x 9 = %d\n", x, x*9);
    printf("%d x 10 = %d\n", x, x*10);
}