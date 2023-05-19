#include <stdio.h>

int main()
{
    float sexo, altura, peso_atual, peso_ideal, peso_maximo, peso_minimo;

    printf("Digite seu sexo (1 para masculino e 2 para feminino): ");
    scanf("%f", &sexo);
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite seu peso atual: ");
    scanf("%f", &peso_atual);

    if (sexo == 1)
    {
        peso_ideal = (72.7 * altura) - 62;
        printf("Peso ideal: %.1f", peso_ideal);
    }
    else
    {
        peso_ideal = (62.1 * altura) - 48.7;
        printf("Peso ideal: %.1f", peso_ideal);
    }
    peso_minimo = peso_ideal * 0.95;
    peso_maximo = peso_ideal * 1.05;

    if (peso_atual >= peso_minimo && peso_atual <= peso_maximo)
    {
        printf("\nVoce esta no peso ideal :)");
    }
    else
    {
        if (peso_atual > peso_maximo)
        {
            printf("\nVoce esta a cima do peso ideal :( ");
        }
        else
        {
            printf("\nVoce esta abaixo do peso ideal :( ");
        }
    }
    
    return 0;
}
