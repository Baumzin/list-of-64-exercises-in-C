#include<stdio.h>
#include<locale.h>

//Aqui, crio uma função chamada verifica, na qual irá verificar se um número digitado pelo usuário
//é í­mpar ou par e retornar uma mensagem informando o resultado.
int verifica(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    printf("O número digitado é par!\n");
    else
    printf("O número digitado é ímpar!\n");
    return 0;
}

//Crio outra função  chamada main, que irá chamar a função verifica e executar o programa.

int main(){
    setlocale(LC_ALL, "");
    char resposta;
//Dou a liberdade para o usuário escolher se deseja repetir o processo ou não
    do
    {
        verifica();
        printf("Desejar conferir outro número?\nS = sim\nN = não\n");
        scanf(" %c", &resposta);

    } while (resposta ==  's' || resposta == 'S');

    
    return 0;
}