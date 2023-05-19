#include <stdio.h>

int main()
{
    float num1, centimetro;

    printf("digite um valor em metros: ");
    scanf("%f", &num1);

    centimetro = num1 * 100;
    printf("centimetros = %.2f", centimetro);

    return 0; 

}