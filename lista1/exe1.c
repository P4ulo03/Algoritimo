#include <stdio.h>

int main()
{
    float num1, dobro;

    printf("digite um numero: ");
    scanf("%f", &num1);

    dobro = num1 * 2;
    printf("dobro: %.1f ", dobro);

    return 0;

}