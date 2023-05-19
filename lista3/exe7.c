#include <stdio.h>

int main()
{
    float minutos, valor;
    
    printf("Digite quantos minutos foram usados no mes: ");
    scanf("%f", &minutos);

    if (minutos <= 50)
    {
        printf("Valor a pagar: 50 reais");
    }
    
    else
    {
        valor = 50 + (1.5 * (minutos - 50));
        printf("Valor a pagar: %.1f reais", valor);
    }
    

    return 0;
}
