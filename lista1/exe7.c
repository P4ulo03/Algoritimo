#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Digite um valor em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("Graus Celsius: %f", celsius); 

    return 0;

}