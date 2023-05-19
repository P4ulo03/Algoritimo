#include <stdio.h>

int main()
{
    float num1, num2, num3;

    printf("Digite um valor inicial para o intervalo: ");
    scanf("%f", &num1);

    printf("Digite um valor final para o intervalo: ");
    scanf("%f", &num2);

    printf("Digite um valor para a verificacao: ");
    scanf("%f", &num3);

    if (num1 < num3 && num3 < num2)
    {
        printf("O valor %.1f esta dento do intervalo", num3);
    }
    
    else if (num1 == num3 || num2 == num3)
    {
        printf("O valor %.1f esta em uma extremidade", num3);
        
    }
    
    else
   	{
        printf("O valor %.1f nao esta dentro do intervalo", num3);
   	}
    

    return 0;
}
