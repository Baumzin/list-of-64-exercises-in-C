#include <stdio.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int stringA[5], stringB[8];
    int i, j;

    for(i = 0; i <  5; i++)
    {
        printf("insira o %dº elemento de stringA: ", i+1);
        scanf("%d",  &stringA[i]);
    }
    for(i = 0; i <  8; i++)
    {
        printf("insira o %dº elemento de stringB: ", i+1);
        scanf("%d",  &stringB[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<8; j++)
        {
            if(stringA[i] == stringB[j])
            {
                printf("%d\n", stringA[i]);
                break;
            }
        }
    }
    
    return 0;

}