#include<stdio.h>
#include<locale.h>

//Aqui, crio uma fun��o chamada verifica, na qual ir� verificar se um n�mero digitado pelo usu�rio
//� �mpar ou par e retornar uma mensagem informando o resultado.
int verifica(){
    int n;
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    printf("O n�mero digitado � par!\n");
    else
    printf("O n�mero digitado � �mpar!\n");
    return 0;
}

//Crio outra fun��o  chamada main, que ir� chamar a fun��o verifica e executar o programa.

int main(){
    setlocale(LC_ALL, "");
    char resposta;
//Dou a liberdade para o usu�rio escolher se deseja repetir o processo ou n�o
    do
    {
        verifica();
        printf("Desejar conferir outro n�mero?\nS = sim\nN = n�o\n");
        scanf(" %c", &resposta);

    } while (resposta ==  's' || resposta == 'S');

    
    return 0;
}