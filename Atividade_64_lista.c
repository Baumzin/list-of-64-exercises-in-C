#include<stdio.h>
#include<locale.h>

//Neste programa, eu realizo uma série de pedidos que envolvem um vetor, números ímpares em posições pares e  
//números pares em posições ímpares e a análise dos elementos do vetor.


//1 - Carregar o vetor
void carregarVetor(int vetor[], int tam) {

    int i;
    setlocale(LC_ALL, "");

    //Aqui, vamos ler cada número digitado pelo usuário e armazená-lo na variável chamada de vetor, para que ela
    //possa  ser utilizada em todas as opções do menu.
    for(i = 0; i < tam; i++){
        printf("Insira  o %dº valor : ", i + 1);
        scanf(" %d", &vetor[i]);
    }
    printf("\n");
}
//2 - Listar Vetor
void listarVetor(int vetor[], int tam){
    int i;
    setlocale(LC_ALL, "");

    //listamos todos os elementos do vetor na ordem adicionada
    printf("\n");
    for(i = 0; i < tam; i++){
        
        printf("%d ", vetor[i]);
        printf("\n");
    }
}

//3 - Exibir apenas os números pares do vetor
void exibirPares(int vetor[], int tam){
    int i;
    setlocale(LC_ALL, "");
    printf("\n");
    //Conforme os indices vão passando, o programa realiza o mod do elemento e caso resulte em 0,
    //ele é par
    for(i = 0; i < tam; i++){
        if(vetor[i] % 2 == 0)
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
//4 - Exibir apenas os números ímpares do vetor
void exibirImpares(int vetor[], int tam){
    int i;
    setlocale(LC_ALL, "");
    printf("\n");
    //Conforme os indices vão passando, o programa realiza o mod do elemento e caso resulte em 
    //um número diferente de 0, ele é ímpar
   
    for(i = 0; i < tam; i++){
        if(vetor[i] % 2 != 0)
        printf("%d\n", vetor[i]);
    }
    printf("\n");
}
//5 - Exibir a quantidade de números pares nas posições ímpares
int exibirQuantidadePares(int vetor[], int tam){
    int i;
    int Par = 0;
    setlocale(LC_ALL, "");
    for(i = 0; i < tam; i++){
        //para verificarmos os indices impares, adicionamos 1 no i pois já que começa no 0, ele inicializará
        //numa posição impar, e para ver se é  par ou impar, fazemos o mod do elemento e caso resulte em 0, ele
        //contém um número par em uma posição ímpar
        if((i+1) % 2 != 0 && vetor[i] % 2 == 0)
        Par++;
    }
    printf("Há %d números pares em posições ímpares no vetor.\n", Par);

    return 0;
}
//6 - Exibir a quantidade de números ímpares nas posições pares

int exibirQuantidadeImpares(int vetor[], int tam){
    int i;
    int Impar = 0;
    setlocale(LC_ALL, "");
    for(i = 0; i < tam; i++){
        //realizamos o mesmo processo  que no exercício anterior, mas agora para verificar se é impar

        if((i+1) % 2 == 0 && vetor[i] % 2 != 0)
        Impar++;
    }
    printf("Há %d números ímpares em posições pares no vetor.\n", Impar);

    return 0;
}
//Oferecemos um menu com opções do que o usuário poderá fazer no nosso site a partir da definição
//do vetor
int opcoes(){
    int vetor[100];
    int opcao;
    int tam = 0;
    char resposta;
    setlocale(LC_ALL, "");
    do{ 
        printf("Escolha uma opção:\n");
        printf("1 - Carregar Vetor\n");
        printf("2 - Listar Vetor\n");
        printf("3 - Exibir apenas os números pares do vetor\n");
        printf("4 - Exibir apenas os números ímpares do vetor\n");
        printf("5 - Exibir a quantidade de números pares existem nas posições ímpares do vetor\n");
        printf("6 - Exibir a quantidade de números ímpares existem nas posições pares do vetor\n");
        printf("7 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                //pedimos para o usuário definir o tamanho limite do vetor:
                printf("Insira o tamanho do seu vetor :");
                scanf("%d", &tam);
                carregarVetor(vetor, tam);
            break;
            case 2:
                listarVetor(vetor, tam);
            break;
            case 3:
                exibirPares(vetor, tam);
            break;
            case 4:
                exibirImpares(vetor, tam);
            break;
            case 5:
                exibirQuantidadePares(vetor, tam);
            break;
            case 6:
                exibirQuantidadeImpares(vetor, tam);

            break;
            case 7:
                printf("Obrigado por utilizar meu programa!");
                return 0;
            break;
            default:
                printf("Opção inválida!\n");
            break;
        }
        printf("Deseja sair do programa?\nS = sim\nN = não\n");
        scanf(" %c", &resposta);

    }while (resposta ==  'n' || resposta == 'N');

    printf("Obrigado por utilizar meu programa!");
    return 0;
}

int main(){
    opcoes();

    return 0;
}

    

