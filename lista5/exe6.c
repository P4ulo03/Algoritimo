#include <stdio.h>

int main(){
  int i;
  float numero, positivo = 1, negativo = 1, qnt_p = 0, qnt_n = 0;

  for ( i = 0; i < 10; i++)
  {
    printf("Digite %d numero: ", i+1);
    scanf("%f", &numero);
     if (numero > 0)
     {
      qnt_p += positivo;
     }
    else
    {
      qnt_n += negativo;
    }
  }
  printf("Contem %.1f numeros positivos", qnt_p);
  printf("\nContem %.1f numeros negativos", qnt_n);

  return 0;
}
