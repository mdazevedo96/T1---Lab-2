#include<stdio.h>
#include<stdlib.h>
#include "usuario.h"

int main(){
  int tamanho = 5, totalLivros=0;
  float media=0;
  Usuario vet[tamanho];
  leVetor(tamanho, vet);
  totalLivros = calculaQtidadeLivros(tamanho, vet);
  printf("Quantidade total de livros lidos pelos menores de 18 anos: %d\n", totalLivros);
  media = calculaMedia(tamanho, vet);
  printf("Media de livros lidos: %.2f\n", media);
}
