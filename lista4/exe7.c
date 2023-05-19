#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;

    printf("Digite um valor de lado para um triangulo: ");
    scanf("%f", &lado1);

    printf("Digite um valor de lado: ");
    scanf("%f", &lado2);

    printf("Digite um valor de lado: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado1 == lado3)
    {
        printf("Com os lados, formou um triangulo equilatero");
    }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf("Com os lados, formou um trangulo isoceles");
        }
            else
            {
                printf("Com os lados, formou um triangulo escaleno");
            }
            
    return 0;
}
