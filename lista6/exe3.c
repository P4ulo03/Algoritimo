#include <stdio.h>

int main() {
    int tamanho, i, j;

    printf("Digite o tamanho do quadrado (1 a 10): ");
    scanf("%d", &tamanho);

    if (tamanho < 1 || tamanho > 10) {
        printf("Tamanho invalido! Tamanho deve estar entre 1 e 10.\n");
        return 1;
    }

    for (i = 1; i <= tamanho; i++) {
        for (j = 1; j <= tamanho; j++) {
            if (i == 1 || i == tamanho || j == 1 || j == tamanho) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
