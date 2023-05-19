#include <stdio.h>

int main()
{
    float distancia, combustivel, consumo;

    printf("Digite a distancia percorrida em Km: ");
    scanf("%f", &distancia);

    printf("Digite quantos litros de combustivel foram gastos: ");
    scanf("%f", &combustivel);

    consumo = distancia / combustivel; 

    printf("o consumo medio de combustivel foi de: %.1f", consumo);

    return 0;

}