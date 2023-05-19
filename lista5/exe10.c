#include <stdio.h>

int main() {
    float altura, menor_altura, media_altura_mulheres, soma_altura_mulheres;
    int sexo, num_homens, sexo_pessoa_mais_alta;
    float altura_pessoa_mais_alta = 0;
    int i, num_pessoas;

    menor_altura = 99999; 
    media_altura_mulheres = 0;
    soma_altura_mulheres = 0;
    num_homens = 0;

    for (i = 1; i <= 3; i++) {
        printf("Digite a altura (em metros) da pessoa %d: ", i);
        scanf("%f", &altura);
        printf("Digite o sexo da pessoa %d (1 para masculino, 2 para feminino): ", i);
        scanf("%d", &sexo);

        if (altura < menor_altura)
        {
            menor_altura = altura;
        }

        if (sexo == 2)
        { 
            soma_altura_mulheres += altura;
            media_altura_mulheres = soma_altura_mulheres / i;
        }

        if (sexo == 1)
        {
            num_homens++;
        }

        if (altura > altura_pessoa_mais_alta)
        {
            altura_pessoa_mais_alta = altura;
            sexo_pessoa_mais_alta = sexo;
        }
    }

    printf("\nMenor altura do grupo: %.2f metros\n", menor_altura);
    printf("Media de altura das mulheres: %.2f metros\n", media_altura_mulheres);
    printf("Numero de homens: %d\n", num_homens);
    printf("Sexo da pessoa mais alta (1 para masculino, 2 para feminino): %d\n", sexo_pessoa_mais_alta);

    return 0;
}
