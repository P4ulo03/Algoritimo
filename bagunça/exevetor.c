#include <stdio.h>

int main()
{
    int i, vetor1[10], vetor2[10], qnt_vetor = 0;
    
    printf("Digite os valores do vetor1: ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%i", &vetor1[i]);

    }
    printf("Digite os valores do vetor2: ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%i", &vetor2[i]);
    }
    for ( i = 0; i < 10; i++)
    {
       if ( vetor1[i] == vetor2[i])
       {
        qnt_vetor ++;
       }
        
    }
    printf("%i valores iguais na mesma posição em ambos os vetores.", qnt_vetor);



    return 0;
}
