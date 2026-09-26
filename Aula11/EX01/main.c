#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int vetor[8] = {45, 56, 12, 43, 95, 19, 8, 67};

	// ---1.Realizando a busca no vetor:

	int index = -1;  //índice para realizar a busca;
	int valor;	 //Valor para buscar

	printf("Qual numero deseja encontrar? ");
	scanf("%d%*c", &valor);

	// --- For para buscar o valor:
	for(int i = 0; i < 8; i++)
	{
		if(vetor[i] == valor)
			index = i;
	}

	printf("Posição do valor desejado: %d", index);


	printf("\nPressione enter para encerrar...");

	getchar();
	return 0;
}
