#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero diferente do primeiro: ");
    scanf("%f", &num2);

    if (num1 > num2)
    {
        printf("O numero maior e o: %.1f", num1);
    }
     else
     {
        printf("O numero maior e o: %.1f", num2);
     }
     


    return 0;
}
