#include <stdio.h>

int main()
{
    float num1, num2, num3;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    printf("Digite um numero: "); 
    scanf("%f", &num3);

    if (num1 == num2 || num1 == num3 || num2 == num3)
    {
        printf("Existe numeros repetidos entres eles");
    }
    else
    {
        printf("Nao existe numeros repetidos");
    }

    return 0;
}
