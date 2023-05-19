#include <stdio.h>

int main()
{
    float numerador, denominador, resultado;

    printf("Escolha um valor para o numerador: ");
    scanf("%f", &numerador);

    printf("Escolha um valor para o denominador: ");
    scanf("%f", &denominador);

    if (denominador != 0)
    {
        resultado = numerador / denominador; 
        printf("O resultado da divisao sera: %.1f", resultado);
    }
    else
    {
        printf("nao existe divisao por zero");
    }
    

    return 0;
}
