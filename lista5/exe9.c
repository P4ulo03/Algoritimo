#include <stdio.h>

int main()
{
    int i=0;
    float qnt_total_habitantes = 4, salario, porcentagem, soma_salario, soma_filhos, qnt_filhos, media_salario_populacao, media_num_filhos, maior_salario, pessoas_salario_minimo;

    for ( i = 0; i < qnt_total_habitantes; i++)
    {
        printf("Ola habitante de numero %d\n", i+1);
        printf("Quanto voce ganha: \n");
        scanf("%f", &salario);
        printf("Quantidade de filhos: \n");
        scanf("%f", &qnt_filhos);

        soma_salario += salario;
        soma_filhos += qnt_filhos;

        if (salario <= 1000)
        {
           pessoas_salario_minimo ++;
        }
        if (i == 0)
        {
            maior_salario = salario;
        }
        if (salario >= maior_salario)
        {
            maior_salario = salario;
        }  
    }
    media_salario_populacao = soma_salario / qnt_total_habitantes;
    media_num_filhos = soma_filhos / qnt_total_habitantes;
    porcentagem = (pessoas_salario_minimo / qnt_total_habitantes) * 100;

    printf("Media salarial da populacao: %.1f\n", media_salario_populacao);
    printf("Media numero de filhos: %.1f\n", media_num_filhos);
    printf("Maior salario: %f\n", maior_salario);
    printf("Percentual de pessoas com salario ate 1000 conto: %.1f %%\n", porcentagem);
    
    return 0;
}
