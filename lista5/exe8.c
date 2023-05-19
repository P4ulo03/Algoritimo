#include <stdio.h>

int main() {
   int i;
   float entrada, maior_numero, menor_numero;

   for ( i = 0; i < 10; i++)
   {
    printf("Digite %d numero: ", i + 1);
    scanf("%f", &entrada);

    if ( i == 0)
    {
        maior_numero = entrada;
        menor_numero = entrada;
    }
    if ( entrada >= maior_numero)
    {
        maior_numero = entrada;
    }
    if ( entrada <= menor_numero)
    {
        menor_numero = entrada;
    }
    
   }
    printf("Maior numero: %.1f", maior_numero);
    printf("\nMenor numero: %.1f", menor_numero);
    return 0;
}