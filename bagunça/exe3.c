#include <stdio.h>

int main()
{
    int ano, centimetro;

    printf("digite um valor em metros: ");
    scanf("%i", &ano);

    centimetro = ano * 100;
    printf("centimetros = %.2f", centimetro);

    return 0; 

}