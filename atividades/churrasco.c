#include <stdio.h>

int main()
{
    float kid, sigma, muie;

    printf("Digite a quantidade de homens: ");
    scanf("%f", &sigma);

    printf("Digite a quantidade de mulheres: ");
    scanf("%f", &muie);

    printf("Digite a quantidade de criancas: ");
    scanf("%f", &kid);

    float linguica, pica, frango, fralda; 
	int pao, queijo, whisky, breja, refri, energetico;
	
    breja = (sigma * 5) + (muie * 5)  + (kid * 0); 
    whisky = (sigma * 0.5) + (muie * 0.5) + (kid * 0);
    linguica = (sigma * 0.3) + (muie * 0.3) + (kid * 0.3);
    pica = (sigma * 0.3) + (muie * 0.2) + (kid * 0.2); 
    refri = (sigma * 0) + (muie * 0) + (kid * 1);
    frango = (sigma * 0.2) + (muie * 0.1) + (kid * 0.3); 
    fralda = (sigma * 0.3) + (muie * 0.2) + (kid * 0.2);
    queijo = (sigma * 0.5) + (muie * 0.5) + (kid * 1);
    energetico = (sigma * 1) + (muie * 1) + (kid * 0);
    pao = (sigma * 1) + (muie * 1) + (kid * 1);

    printf("Cerveja: %.1i Latinhas", breja);
    printf("\nWhisky: %.3i", whisky);
    printf("\nLinguica: %.1fKg", linguica);
    printf("\nPicanha: %.1fKg", pica);
    printf("\nRefrigerante 2L: %.1i", refri);
    printf("\nFrango: %.1fKg", frango);
    printf("\nFrandinha: %.1fKg", fralda);
    printf("\nTablete de quiejo: %.1i", queijo);
    printf("\nEnergetico 1L: %.1i", energetico);
    printf("\nPao de alho: %i", pao);

    return 0;
}
