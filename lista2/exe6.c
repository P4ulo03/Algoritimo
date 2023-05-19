#include <stdio.h> 

int main()
{
    float teoria1, teoria2, pratica1, pratica2, mediat, mediap, mediag;

    printf("Digite a nota da 1 prova teorica: ");
    scanf("%f", &teoria1);

    printf("Digite a nota da 2 prova teorica: ");
    scanf("%f", &teoria2);

    printf("digite a nota da 1 prova pratica: ");
    scanf("%f", &pratica1);

    printf("digite a nota da 2 prova patica: ");
    scanf("%f", &pratica2);

    mediat = (teoria1 + teoria2) / 2;
    mediap = (pratica1 + pratica2) / 2; 
    mediag = ((mediat * 6) + (mediap * 4)) / 10;

    printf("Media geral: %.1f", mediag);

    return 0; 

}