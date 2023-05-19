#include <stdio.h>

int main()
{
    int num1, num2, divisao, resto;
    printf("digite um numero: ");
    scanf("%i", &num1);

    printf("digite outro numero: ");
    scanf("%i", &num2);

    divisao = num1 / num2; 
    printf("resutado: %i", divisao);
    
    resto = num1 % num2;
    printf("\nresto: %i");

    return 0;

}