#include <stdio.h>

int main()
{
    float p1, p2, media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &p2);

    media = (p1 + p2)/ 2;

    if (media >= 5)
     {
        printf("Aprovado");
        }
    
    else
      {
        printf("Reprovado");
        }
    

    return 0;
}
