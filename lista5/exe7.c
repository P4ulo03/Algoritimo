#include <stdio.h>

int main(){
  int i;
  float num, qnt, positivo = 0, soma = 0, media;

  printf("Digite a quantidade de numero desejada: ");
  scanf("%f", &qnt);

  for (i = 0; i < qnt; i++)
  {
    printf("Digite %d numero: ", i+1);
    scanf("%f", &num);

    if (num >0)
    {
     positivo++, soma += num;
    }
  }
  if (soma >0)
  {  
  media = soma / positivo;
  printf("Media: %.1f", media);
  }
  else
  {
  	printf("Valor invalido");
  }
  
  return 0;
}
