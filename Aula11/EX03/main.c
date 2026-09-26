#include <stdlib.h>
#include <stdio.h>

int buscaSentinela(int* a, int N, int x)
{
	int i = 0;

	a[N] = x;

	while(a[i] != x)
		i = i + 1;

	return i;
}

int main(int argc, char* argv[])
{
	int tamanho, valor;

	printf("Digite o tamanho do vetor: ");
	scanf("%d%*c", &tamanho);

	int* vetor;
	vetor = malloc((tamanho + 1)  * sizeof(int));

	printf("Entre com os valores do vetor: ");
	for(int j = 0; j < tamanho; j++)
	{
		printf("[%d]: ", j);
		scanf("%d%*c", &vetor[j]);
	}

	printf("Digite o valor a ser procurado: ");
	scanf("%d%*c", &valor);

	printf("%d \n", buscaSentinela(vetor, tamanho, valor));
	return 0;
}
