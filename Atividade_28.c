#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int x;

    for (x=0; x<=2000; x++)
    {
        printf("%d\n", x);
    }
    


}