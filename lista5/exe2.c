#include <stdio.h>

int main()
{
    float i, numero;
    for ( i = 0; i < 10; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%f", &numero);

        if (numero < 0 )
        {
            printf("Numero negativo");
        }
        else
        {
            if (numero == 0)
            {
                printf("Numero nulo");
            }
            else
            {
                printf("Numero positivo");
            }
            
        }
        
    }
    
    return 0;
}
