#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int i; 
    long double somatorio = 0, inicio = 1;
    // o "i" serve para contar
    // o somatorio serve para somar as multiplicações feitas
    //inicio rerpesenta o primeiro quadriculado de xadrez.
    

    printf("lendo o valor do grão posto no primeiro quadrado do tabuleiro. . .\n\n");

    for(i = 1; i < 64; ++i)//aqui, devemos por como "i < 64" pois o i já esta iniciando na 1ª casa, então se fosse colocar "i <= 64", estaríamos fazendo como se fosse para 65 casas.
    {
        inicio *= 2;
        somatorio += inicio;
        __mingw_printf("%d valor: %Lf\n", i, inicio);
    }
    __mingw_printf("o número de grãos que deveria ser entregue ao monge seria de:\n%Lf\n", somatorio);

    return 0;
    
}
//o resultado, inicialmente, resulta em -1 por que ocorre um estouro de memória pelo imenso númeo sendo guardado nele.
// para resolvermos isso, devemos aumentar o tamanho da memória (o inicio e o somatorio)
// com isso, aumentamos o espaço do int (4 byts) para long long int (8 byts), alterando o %d para %lld (ou %lli)
// mesmo assim, o espaço continua insuficiente, então resolvemos isso alterando o tipo da variável e substintuindo o int por double (com 16 bytes de memória)
// double (%lf) para long double (%Lf)
// entretanto, até essa parte resultaria corretamente se não fosse a porcaria do sistema Windows frescurento, pois ele não suporta que um printf printe um número tão grande. . .
// para isso, precisamos agora recorrer a uma função do compilador que estamos utilizando (o gcc)
//__mingw_printf();

//admito que tive que pesquisar isso aqui hehe