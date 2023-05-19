#include <stdio.h>

int main() {
    int num_alunos, num_disciplinas, i, j;
    float nota, soma_notas, media;

    printf("Digite a quantidade de alunos que estao cursando o 3 semestre: ");
    scanf("%d", &num_alunos);

    // Loop para cada aluno
    for (i = 1; i <= num_alunos; i++) {
        soma_notas = 0;

        printf("\nAluno %d:\n", i);
        printf("Digite a quantidade de disciplinas cursadas no 2 semestre: ");
        scanf("%d", &num_disciplinas);

        // Loop para cada disciplina
        for (j = 1; j <= num_disciplinas; j++) {
            printf("Digite a nota final da disciplina %d: ", j);
            scanf("%f", &nota);

            soma_notas += nota;
        }

        // Calcula a media do aluno e exibe o resultado
        media = soma_notas / num_disciplinas;
        printf("Media do aluno: %.2f\n", media);
    }

    return 0;
}
