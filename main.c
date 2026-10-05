#include <stdio.h>

int bubbleSort(int vetor[], int tamanho)
{
	int qtd = 0;

	for(int i = 0; i < tamanho - 1; i++)
	{
		for(int j = tamanho - 1; j > i; j--)
		{
			if(vetor[j] < vetor[j - 1])
			{
				int aux = vetor[j];
				vetor[j] = vetor[j - 1];
				vetor[j - 1] = aux;
				qtd = qtd + 1;
			}
		}
	}
	return qtd;
}

int main()
{
	int N;
	scanf("%d", &N);

	int vetor[N];


	for(int i = 0; i < N; i++)
		scanf("%d", &vetor[i]);

	printf("%d trocas foram realizadas\n", bubbleSort(vetor, N));

	return 0;
}
