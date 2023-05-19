#include <stdio.h>
#define TAM 10

int main()
{
    int numeros[]={1, 30, 55, -30, 131};
    int i;
    
    for ( i = 0; i < 5; i++)
    {
         printf("%i\n", numeros[i]); //indice 0 é a primeria posição do vetor
    }
    
    return 0;
}
