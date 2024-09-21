/*1. SELEÇÃO Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas provas
(P1 e P2) iniciais; se a média nas duas provas for maior ou igual a 5.0, e se nenhuma das duas notas for inferior
a 3.0, o aluno passa direto. Caso contrário, o aluno faz uma terceira prova (P3) e a média é calculada
considerando-se a terceira nota e a maior das notas entre P1 e P2. Neste caso, o aluno é aprovado se a média
final for maior ou igual a 5.0.
Escreva um programa em C que leia inicialmente as duas notas de um aluno, fornecidas pelo usuário
via teclado. Se as notas não forem suficientes para o aluno passar direto, o programa deve capturar a nota da
terceira prova, também fornecida via teclado. Como saída, o programa deve imprimir a média final do aluno,
seguida da mensagem “Aprovado” ou “Reprovado”.
  */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "alunos.h"

int main(){
  int p1, p2, p3;
  printf("Digite a nota da primeira prova: ");
  scanf("%d", &p1);
  printf("Digite a nota da segunda prova: ");
  scanf("%d", &p2);
  if(validaNotas(p1, p2)){
    if(calculaMedia(p1, p2)){
      printf("Aprovado");
    }else{
      printf("Digite a nota da terceira prova: ");
      scanf("%d", &p3);
      if(calculaMediaFinal(maiorNota(p1, p3)){
        printf("Aprovado");
      }else{
        printf("Reprovado");
      }
    }
}
}