#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "alunos.h"

bool validaNotas(int p1, int p2) {
    return (p1 >= 3 && p2 >= 3);
}

bool calculaMedia(int p1, int p2) {
    int media = (p1 + p2) / 2;
    return media >= 5;
}

int maiorNota(int p1, int p2) {
    return (p1 > p2) ? p1 : p2;
}

bool calculaMediaFinal(int maiorNota, int p3) {
    int mediaFinal = (maiorNota + p3) / 2;
    return mediaFinal >= 5;
}
