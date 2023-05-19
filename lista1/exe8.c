#include <stdio.h>

int main()
{
    float raio, perimetro;
    
    printf("Para calcular o perimetro, digite o valor do raio: ");
    scanf("%f", &raio);

    perimetro = 2 * 3.14 * raio;
    printf("Perimetro: %.2f ", perimetro);

    return 0;

}