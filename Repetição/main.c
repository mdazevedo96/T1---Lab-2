#include<stdio.h>
#include<stdlib.h>
#include "funcao.h"

int main(){
    float a, b, c, rSoma, rProduto, rMedia;

    while(1){
        printf("Digite três valores reais: ");
        scanf("%f %f %f", &a, &b, &c);

        if (a >= b || b >= c) {
            printf("Valores fora de ordem crescente. Programa encerrado.\n");
            break;
        }
        else {
            rSoma = soma(a, b, c);
            rProduto = produto(a, b, c);
            rMedia = media(rSoma);

            printf("Soma: %.2f\n", rSoma);
            printf("Produto: %.2f\n", rProduto);
            printf("Média: %.2f\n", rMedia);
            printf("-------------------\n");
        }
    }

    return 0;
}
