#include <stdio.h>

int main()
{
    float distancia, tempo, velocidade;

    printf("Digite qual foi a distancia percorrida em Km: ");
    scanf("%f", &distancia);

    printf("Digite quanto foi o tempo percorrido em minutos: ");
    scanf("%f", &tempo);

    velocidade = distancia / tempo;
    printf("A velocidade media foi de: %.2f", velocidade);

    return 0;
}
