#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
	int tam = 5;
	int vetor[tam];
	le_vetor(vetor, tam);
	inverte(vetor, tam);
	ordena_decr(vetor, tam);
	calcula_itens(vetor, tam);

	return 0;
}
