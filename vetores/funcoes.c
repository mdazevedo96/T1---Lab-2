#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void imprime(int v[], int t)
{
	int i;
    for(i=0; i<t; i++){
        printf("%d\t", v[i]);
    }
}

void le_vetor(int v[], int t)
{
	int i;
    puts("INSIRA A SEGUIR VALORES INTEIROS\n");
    for(i=0; i<t; i++){
        printf("%dº VALOR: ", i+1);
        scanf("%d", &v[i]);
    }
}

void inverte(int v[], int t)
{
    int fim = t-1;
    int i;
    for(i=0; i<fim; i++){
        int aux = v[i];
        v[i] = v[fim];
        v[fim] = aux;
        fim = fim-1;
    }
    printf("\nVETOR INVERTIDO: ");
    imprime(v, t);
}

void ordena_decr(int v[], int t)
{
    int fim = t-1;
    int i, j;
    for (i=0; i<fim; i++){
        for (j=0; j<(fim-i); j++){
            if (v[j] < v[j+1]) {
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
    	}	
	}
    printf("\nVETOR ORDENADO DESCRECENTE: ");
    imprime(v, t);
}

void maior_valor(int v[], int t)
{
	int i;
    int maior = v[0];
    for (i=1; i<t; i++){
        if(v[i] > maior){
 	       maior = v[i];
        }
	}
    printf("\nMAIOR VALOR DO VETOR: %d", maior);
}

void menor_valor(int v[], int t)
{
    int menor = v[0];
    int i;
    for (i=1; i<t; i++){
        if(v[i] < menor){
            menor = v[i];
        }
    }
    printf("\nMENOR VALOR DO VETOR: %d", menor);
}

float media_valores(int v[], int t)
{
    int soma = 0;
    int i;
    for (i=0; i<t; i++){
        soma = soma + v[i];
	}
    float media = (float)soma / t;
    printf("\nMEDIA DE VALORES DO VETOR: %.2f", media);
    return media;
}

void qtd_v_maiorq_m(int v[], int t)
{
    int media = media_valores(v, t);
    int q_valores = 0;
    int i;
    for (i=0; i<t; i++){
        if(v[i] > media){
            q_valores = q_valores + 1;
        }
    }
    printf("\nQUANTIDADE DE VALORES MAIORES DO QUE A MEDIA: %d\n", q_valores);
}

void calcula_itens(int v[], int t)
{
        maior_valor(v, t);
        menor_valor(v, t);
        qtd_v_maiorq_m(v, t);
}
