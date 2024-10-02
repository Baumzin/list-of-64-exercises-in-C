#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "");
    int max, i, melhorVolta;
    float tempo, melhorTempo, somaTempos = 0, tempoMedio;

    //Aqui n�s lemos o n�mero de voltas//
    printf("Quantas voltas o piloto deu?: ");
    scanf("%d", &max);

    // Inicializa o melhor tempo com um valor alto para ser comparado posteriormente//
    melhorTempo = 999999;

    // aqui, lemos os tempos de cada volta//
    for (i = 1; i <= max; i++) {
        printf("Digite o tempo da %d� volta: ", i);
        scanf("%f", &tempo);

        // Somamos os tempos para calcular a m�dia depois//
        somaTempos += tempo; //= somatempos = somatempo + tempo//

        // Verifica se o tempo atual � o melhor tempo//
        if (tempo < melhorTempo) 
        {
            melhorTempo = tempo;
            melhorVolta = i;
        }
    }

    // Calcula o tempo m�dio//
    tempoMedio = somaTempos / max;

    // Imprime os resultados obtidos//
    printf("Melhor tempo obtido: %.2f minutos\n", melhorTempo);
    printf("Volta em que o melhor tempo ocorreu: %d\n", melhorVolta);
    printf("Tempo m�dio das %d voltas: %.2f minutos\n", max, tempoMedio);

    return 0;
}