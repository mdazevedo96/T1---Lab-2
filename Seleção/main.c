#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "alunos.h"

int main() {
    int p1, p2, p3;

    printf("Digite a nota da primeira prova: ");
    scanf("%d", &p1);
    printf("Digite a nota da segunda prova: ");
    scanf("%d", &p2);

    if (validaNotas(p1, p2)) {
        if (calculaMedia(p1, p2)) {
            printf("Aprovado\n");
        } else {
            printf("Digite a nota da terceira prova: ");
            scanf("%d", &p3);
            if (calculaMediaFinal(maiorNota(p1, p2), p3)) {
                printf("Aprovado\n");
            } else {
                printf("Reprovado\n");
            }
        }
    } else {
        printf("Digite a nota da terceira prova: ");
        scanf("%d", &p3);
        if (calculaMediaFinal(maiorNota(p1, p2), p3)) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
