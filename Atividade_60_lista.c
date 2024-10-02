#include<stdio.h>
#include<locale.h>

int LerCoordX(){
    int x;
    printf("Digite a Coordenada X:");
    scanf("%d", &x);

    return x;
}
int LerCoordY(){
    int y;
    printf("Digite a Coordenada Y:");
    scanf("%d", &y);

    return y;
}
int VERIFICA_QUADRANTE(int x, int y)
{
    if(x < 0 && y < 0)
    {
        return 3;
    }
    if(x < 0 && y > 0)
    {
        return 4;
    }
    if(x > 0 && y < 0)
    {
        return 2;
    }
    if(x > 0 && y > 0)
    {
        return 1;
    }

}

int main(){
    setlocale(LC_ALL, "");
    int x, y, r;
    x = LerCoordX();
    y = LerCoordY();
    r = VERIFICA_QUADRANTE(x, y);
    printf("As coordenadas estão no %dº quadrante", r);

    return 0;   

}