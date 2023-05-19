#include <stdio.h>

int main()
{
    float i, numero, resultado;
    
    printf("\nDigite um numero: ");
        scanf("%f", &numero);
        
    for ( i = 0; i <= 10; i++)
    { 
        resultado = numero * i;
        printf("\n%.1f x %.1f = %.1f", numero, i, resultado);
    }
    
    
    return 0;
}
