#include <stdio.h>

int main()
{
    float num1;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    if (num1 > 0)
    {
        printf("Positivo");
        
    }
    
    else if (num1< 0)
    {
        printf("Negativo");
    }
	else{
    	printf("Nulo");
	}
		
	

    return 0;
}
