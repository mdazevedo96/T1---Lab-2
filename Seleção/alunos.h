#include <stdio.h>
#include <stdlib.h>

bool validaNotas(int p1, int p2){
  bool notasValidas = true;
  if(p1 && p2 >=3){
    notasValidas = true;
  }else{
    notasValidas = false;
  }
  return notasValidas;
}

bool calculaMedia(int p1, int p2);
  
int maiorNota(int p1, int p2);
  
bool calculaMediaFinal(int maiorNota, int p3);
 

