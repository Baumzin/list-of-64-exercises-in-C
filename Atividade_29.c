#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int x=101;

    while (x <= 200)
    {
        printf("%d\n", x);
        x+=2;
    }
    
}