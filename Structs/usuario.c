#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"
/*
Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: idade
e quantidade de livros que leu no ano de 2023. Faça um programa que leia os dados de 5 usuários. Depois,
calcule e imprima:
a. A quantidade total de livros lidos pelos entrevistados menores de 18 anos;
b. A média de livros lidos pelos entrevistados.
*/

/*
  esta funcao recebe o tamanho do vetor e o endereço do primeiro elemento do vetor; preenche o vetor com
  dados digitados pelo usuário
  */

void leVetor (int tamanho, Usuario* vet){
    for(int i=0; i<tamanho; i++){
      printf("Usuario %d: \n");
      printf("Digite a idade: ");
      scanf("%d", &vet[i].idade);
      printf("Digite a quantidade de livros lidos em 2023: ");
      scanf("%d", &vet[i].qtdade);
    }
}

/*
  esta função recebe o tamanho do vetor e o endereco do primeiro elemento do vetor; calcula a quantidade total
  de livros lidos pelos entrevistados menores de 18 anos, e retorna esta quantidade para o main
  */
int calculaQtidadeLivros (int tamanho, Usuario* vet){
    int total = 0;
    for(int i=0; i<tamanho; i++){
      if(vet[i].idade < 18){
        total+=vet[i].qtdade;
      }
    }
  return total;
}

/*
  esta função recebe o tamanho do vetor e o endereco do primeiro elemento do vetor; calcula a média de livros
  lidos pelos entrevistados e retorna esta quantidade para o main.
*/

float calculaMedia (int tamanho, Usuario* vet){
  int total=0;
  float media=0;
  for(int i=0; i<tamanho; i++){
    total+=vet[i].qtdade;
  }
    media = total/tamanho;

  return media;
}
