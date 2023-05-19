#include <stdio.h>
#include <math.h>

int main()
{
    float num1, raiz, potencia;

    printf("digite um valor: ");
    scanf("%f", &num1);

    raiz = sqrt(num1);
    potencia = pow(num1,8);

    printf("Raiz: %.1f", raiz);
    printf("\nPotencia: %.1f", potencia);  



    return 0;
}
