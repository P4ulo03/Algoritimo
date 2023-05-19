#include <stdio.h>

int main()
{
    int i, j, qnt_alunos, qnt_materias;
    float nota_materia, media_nota, nota_total;

    printf("Quantidade de alunos do 3 semestre: ");
    scanf("%d", &qnt_alunos);

    for  (i = 1; i <= qnt_alunos; i++)
    {
        nota_total = 0;

        printf("Quantidade de disciplinas do %d aluno no 2 semestre: ", i);
        scanf("%d", &qnt_materias);
        
        for (j = 1; j <= qnt_materias; j++)
        {
        printf("Nota referente a %d materia: ", j);
        scanf("%f", &nota_materia);

        nota_total += nota_materia;
        }

    media_nota = nota_total / qnt_materias;
    printf("Media do %d aluno: %.1f", i, media_nota);
    printf("\n");
    }
    

    return 0;
}
