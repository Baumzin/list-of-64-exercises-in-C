#include<stdio.h>
#include<locale.h>

//Neste programa, eu realizo uma s�rie de pedidos que envolvem um vetor, n�meros �mpares em posi��es pares e  
//n�meros pares em posi��es �mpares e a an�lise dos elementos do vetor.


//1 - Carregar o vetor
void carregarVetor(int vetor[], int tam) {

    int i;
    setlocale(LC_ALL, "");

    //Aqui, vamos ler cada n�mero digitado pelo usu�rio e armazen�-lo na vari�vel chamada de vetor, para que ela
    //possa  ser utilizada em todas as op��es do menu.
    for(i = 0; i < tam; i++){
        printf("Insira  o %d� valor : ", i + 1);
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

//3 - Exibir apenas os n�meros pares do vetor
void exibirPares(int vetor[], int tam){
    int i;
    setlocale(LC_ALL, "");
    printf("\n");
    //Conforme os indices v�o passando, o programa realiza o mod do elemento e caso resulte em 0,
    //ele � par
    for(i = 0; i < tam; i++){
        if(vetor[i] % 2 == 0)
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
//4 - Exibir apenas os n�meros �mpares do vetor
void exibirImpares(int vetor[], int tam){
    int i;
    setlocale(LC_ALL, "");
    printf("\n");
    //Conforme os indices v�o passando, o programa realiza o mod do elemento e caso resulte em 
    //um n�mero diferente de 0, ele � �mpar
   
    for(i = 0; i < tam; i++){
        if(vetor[i] % 2 != 0)
        printf("%d\n", vetor[i]);
    }
    printf("\n");
}
//5 - Exibir a quantidade de n�meros pares nas posi��es �mpares
int exibirQuantidadePares(int vetor[], int tam){
    int i;
    int Par = 0;
    setlocale(LC_ALL, "");
    for(i = 0; i < tam; i++){
        //para verificarmos os indices impares, adicionamos 1 no i pois j� que come�a no 0, ele inicializar�
        //numa posi��o impar, e para ver se �  par ou impar, fazemos o mod do elemento e caso resulte em 0, ele
        //cont�m um n�mero par em uma posi��o �mpar
        if((i+1) % 2 != 0 && vetor[i] % 2 == 0)
        Par++;
    }
    printf("H� %d n�meros pares em posi��es �mpares no vetor.\n", Par);

    return 0;
}
//6 - Exibir a quantidade de n�meros �mpares nas posi��es pares

int exibirQuantidadeImpares(int vetor[], int tam){
    int i;
    int Impar = 0;
    setlocale(LC_ALL, "");
    for(i = 0; i < tam; i++){
        //realizamos o mesmo processo  que no exerc�cio anterior, mas agora para verificar se � impar

        if((i+1) % 2 == 0 && vetor[i] % 2 != 0)
        Impar++;
    }
    printf("H� %d n�meros �mpares em posi��es pares no vetor.\n", Impar);

    return 0;
}
//Oferecemos um menu com op��es do que o usu�rio poder� fazer no nosso site a partir da defini��o
//do vetor
int opcoes(){
    int vetor[100];
    int opcao;
    int tam = 0;
    char resposta;
    setlocale(LC_ALL, "");
    do{ 
        printf("Escolha uma op��o:\n");
        printf("1 - Carregar Vetor\n");
        printf("2 - Listar Vetor\n");
        printf("3 - Exibir apenas os n�meros pares do vetor\n");
        printf("4 - Exibir apenas os n�meros �mpares do vetor\n");
        printf("5 - Exibir a quantidade de n�meros pares existem nas posi��es �mpares do vetor\n");
        printf("6 - Exibir a quantidade de n�meros �mpares existem nas posi��es pares do vetor\n");
        printf("7 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                //pedimos para o usu�rio definir o tamanho limite do vetor:
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
                printf("Op��o inv�lida!\n");
            break;
        }
        printf("Deseja sair do programa?\nS = sim\nN = n�o\n");
        scanf(" %c", &resposta);

    }while (resposta ==  'n' || resposta == 'N');

    printf("Obrigado por utilizar meu programa!");
    return 0;
}

int main(){
    opcoes();

    return 0;
}

    

