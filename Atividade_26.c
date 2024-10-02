#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int x = 100;

    while (x >= 0)
    {
        printf("%d\n", x);
        x--;
    }
    
}