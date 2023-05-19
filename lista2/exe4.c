#include <stdio.h>

int main()
{
    float horas, extras, hh, he, sl;

    printf("Digite o total de horas normais trabalhadas: ");
    scanf("%f", &horas);

    hh = 10 * horas;

    printf("Digite o total de horas extras trabalhadas: ");
    scanf("%f", &extras);

    he = 15 * extras;

    sl = hh + he;

    printf("O salario total sera de: %.1f", sl);

    return 0;
}
