#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "alunos.h"

int main() {
    int p1, p2, p3;

    // Leitura das notas P1 e P2
    printf("Digite a nota da primeira prova: ");
    scanf("%d", &p1);
    printf("Digite a nota da segunda prova: ");
    scanf("%d", &p2);

    // Verifica se as notas são válidas (nenhuma menor que 3)
    if (validaNotas(p1, p2)) {
        // Calcula média de P1 e P2, se for maior ou igual a 5, aluno está aprovado
        if (calculaMedia(p1, p2)) {
            printf("Aprovado\n");
        } else {
            // Caso a média não seja suficiente, o aluno precisa fazer a terceira prova
            printf("Digite a nota da terceira prova: ");
            scanf("%d", &p3);

            // Calcula a média final usando a maior nota entre P1 e P2 e a nota da P3
            if (calculaMediaFinal(maiorNota(p1, p2), p3)) {
                printf("Aprovado\n");
            } else {
                printf("Reprovado\n");
            }
        }
    } else {
        // Se qualquer uma das notas for menor que 3, o aluno vai para a terceira prova
        printf("Digite a nota da terceira prova: ");
        scanf("%d", &p3);

        // Calcula a média final considerando a maior nota entre P1 e P2 com a P3
        if (calculaMediaFinal(maiorNota(p1, p2), p3)) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
