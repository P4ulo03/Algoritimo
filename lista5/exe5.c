	#include <stdio.h>

int main(){
  int i;
  float numero, media, soma =0;

  for (i = 0; i < 10; i++)
  {
    printf("Digite %d numero: ", i+1);
    scanf("%f", &numero);

    soma += numero;

  }
  media = soma / 10;
  printf("Media: %.1f", media);

  return 0;
}
