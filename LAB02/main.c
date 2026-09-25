#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int buscaBinaria(int vetor[], int tamanho, int chave)
{
	int L = 0;
	int R = tamanho - 1;
	int qtd = 0;

	int min = 0;
	int max = tamanho - 1;

	while(L <= R)
	{
		int meio = floor(L + R)/2;
		if(vetor[meio] == chave)
		{
			qtd = qtd + 1;
			//Verifica se há valores iguais a chave à esquerda do valor encontrado
			for(int contador = 1; meio - contador >= min; contador++)
				if(vetor[meio - contador] == chave)
					qtd = qtd + 1;
				else
					break;
			//Verifica se há valores iguais a chave à direita do valor encontrado
			for(int contador = 1; meio + contador <= max; contador++)
				if(vetor[meio + contador] == chave)
					qtd = qtd + 1;
				else
					break;
			return qtd;
		}
		else
			if(chave < vetor[meio])
				R = meio - 1;
			else
				L = meio + 1;
	}
	return qtd;
}

int main(int argc, char* argv[])
{
	int tamanho,chave;

	scanf("%d%*c", &tamanho);

	int* vetor = malloc(tamanho * sizeof(int));

	for(int i = 0; i < tamanho; i++)
		scanf("%d%*c", &vetor[i]);

	scanf("%d%*c", &chave);

	printf("%d", buscaBinaria(vetor, tamanho, chave));

	free(vetor);
	return 0;
}
