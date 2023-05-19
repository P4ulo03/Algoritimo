#include <stdio.h>

int main()
{
    float i, numero, dobro;
    for ( i = 0; i < 10; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%f", &numero);

        dobro = numero * 2;

        printf("O dobro e: %.2f", dobro);
    }
    
    return 0;
}
