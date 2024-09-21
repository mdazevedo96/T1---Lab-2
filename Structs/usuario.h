#include <stdlib.h>

struct usuario
{
int idade;
int qtdade;
};

typedef struct usuario Usuario;

void leVetor (int tamanho, Usuario* vet);

int calculaQtidadeLivros (int tamanho, Usuario* vet);

float calculaMedia (int tamanho, Usuario* vet);


