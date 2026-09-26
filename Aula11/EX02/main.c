#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int vetor[], int N, int x)
{
	int i = 0;

	while(i < N && vetor[i] != x)
		i = i + 1;
	return i;
}

int main(int argc, char* argv[])
{
	int* vetor;
	int tamanho, valor;

	printf("Tamanho do vetor: ");
	scanf("%d%*c", &tamanho);

	vetor = malloc(tamanho * sizeof(int));

	printf("Valor para buscar: ");
	scanf("%d%*c", &valor);

	buscaLinear(vetor, tamanho, valor);

	getchar();
	return 0;
}
