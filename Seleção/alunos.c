#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "alunos.h"

bool validaNotas(int p1, int p2){
  bool notasValidas = true;
  if(p1 && p2 >=3){
    notasValidas = true;
  }else{
    notasValidas = false;
  }
  return notasValidas;
}

bool  calculaMedia(int p1, int p2){
  int media = 0;
  bool aprovado = false;
  media = (p1 + p2)/2;
  if(media >= 5){
    aprovado = true;
  }else{
    aprovado = false;
  }
  return aprovado;
}

int maiorNota(int p1, int p2){
  int maior = 0;
  if(p1 > p2){
    maior = p1;
  }else{
    maior = p2;
  }
  return maior;
}

bool calculaMediaFinal(int maiorNota, int p3){
  bool aprovado = false;
  int mediaFinal = 0;
  mediaFinal = (maiorNota + p3)/2;
  if(mediaFinal >=5){
    aprovado = true;
  }else{
    aprovado = false;
  }
  return aprovado;
}

