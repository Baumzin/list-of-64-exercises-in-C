#include<stdio.h>
#include<locale.h>
main(){

    setlocale (LC_ALL, "");
    int T,Vm;

    printf("Insira o tempo total gasto na viagem :");
    scanf("%i",&T);

    printf("Insira sua velocidade m�dia total da viagem :");
    scanf("%i",&Vm);

    printf("A quantidade de combust�vel gasto na viagem foi de :%i litros",T*Vm/12);
}