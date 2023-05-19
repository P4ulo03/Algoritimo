#include <stdio.h>

int main()
{
	int i, j, altura;
	
	printf("Qual e a altura da arvore (1 a 20)? ");
	scanf("%d", &altura);
	
    for (i = 0; i <= altura - 2; i++)
    {
    	printf(" ");
	}
	
	printf("*\n");
	
    for (i = 0; i < altura - 1; i++)
	{
		for (j = 0; j < altura - i - 2; j++)
		{
			printf(" ");
		}
		
		for (j= 0; j < 3 + 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	} 
	
	for (i = 0; i < altura; i++)
    {
    	for (j = 0; j <= altura - 2; j++)
		{
			printf(" ");
		}	
		printf("*\n");
	}
	
    return 0;
}
