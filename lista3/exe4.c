#include <stdio.h>

int main()
{
    float sbruto, sliguido;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &sbruto);

    if (sbruto <= 2750){
    
         sliguido = sbruto * 0.85;
         printf("Seu salario liguido e de: %.2f ", sliguido);
    }
    else{
    	
    	sliguido = sbruto * 0.75;
       	printf("Seu salario liguido e de: %.2f ", sliguido);
		
    }

    return 0;
}
