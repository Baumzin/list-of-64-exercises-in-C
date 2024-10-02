#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i; 
    long double somatorio = 0, inicio = 1;
    // o "i" serve para contar
    // o somatorio serve para somar as multiplica��es feitas
    //inicio rerpesenta o primeiro quadriculado de xadrez.
    

    printf("lendo o valor do gr�o posto no primeiro quadrado do tabuleiro. . .\n\n");

    for(i = 1; i < 64; ++i)//aqui, devemos por como "i < 64" pois o i j� esta iniciando na 1� casa, ent�o se fosse colocar "i <= 64", estar�amos fazendo como se fosse para 65 casas.
    {
        inicio *= 2;
        somatorio += inicio;
        __mingw_printf("%d valor: %Lf\n", i, inicio);
    }
    __mingw_printf("o n�mero de gr�os que deveria ser entregue ao monge seria de:\n%Lf\n", somatorio);

    return 0;
    
}
//o resultado, inicialmente, resulta em -1 por que ocorre um estouro de mem�ria pelo imenso n�meo sendo guardado nele.
// para resolvermos isso, devemos aumentar o tamanho da mem�ria (o inicio e o somatorio)
// com isso, aumentamos o espa�o do int (4 byts) para long long int (8 byts), alterando o %d para %lld (ou %lli)
// mesmo assim, o espa�o continua insuficiente, ent�o resolvemos isso alterando o tipo da vari�vel e substintuindo o int por double (com 16 bytes de mem�ria)
// double (%lf) para long double (%Lf)
// entretanto, at� essa parte resultaria corretamente se n�o fosse a porcaria do sistema Windows frescurento, pois ele n�o suporta que um printf printe um n�mero t�o grande. . .
// para isso, precisamos agora recorrer a uma fun��o do compilador que estamos utilizando (o gcc)
//__mingw_printf();

//admito que tive que pesquisar isso aqui hehe