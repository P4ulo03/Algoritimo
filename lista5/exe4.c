#include <stdio.h>

int main(){

  float i, teoria, lab, final;

  for (i = 0; i < 50; i++)
  {
    printf("\nDigite a nota da teoria: ");
    scanf("%f", &teoria);
    printf("Digite a nota de laboratorio: ");
    scanf("%f", &lab);

    final = (teoria * 0.6) + (lab * 0.4);

    printf("Nota final: %.1f", final);

    if (final >= 7)
    {
      printf("\nBem");
    }
    else
    {
      if ( final >= 5)
      {
        printf("\nRazoavel");
      }
      else
      {
        printf("\nMal");
      }

    }

  }

	return 0;
}
