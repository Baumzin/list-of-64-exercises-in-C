#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int x;

    for(x = 0; x <= 100; x++)
    {
        if (x % 10 == 0)
        {
            printf("\n%d é múlltiplo de 10", x);
        }
        else
        {
            printf("\n%d", x);
        }
        
    }

    return 0;
}