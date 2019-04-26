/* Gera todas as permuta��es */

#include <stdio.h>

void troca(int vetor[], int i, int j)
{
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}

void permuta(int vetor[], int inf, int sup)
{
	if(inf == sup)
	{
		for(int i = 0; i <= sup; i++)
			printf("%d ", vetor[i]);
		printf("\n");
	}
	else
	{
		for(int i = inf; i <= sup; i++)
		{
			troca(vetor, inf, i);
			permuta(vetor, inf + 1, sup);
			troca(vetor, inf, i); // backtracking
		}
	}
}

int main(int argc, char *argv[])
{
	int v[] = {0,1,2};
	int tam_v = sizeof(v) / sizeof(int);

	permuta(v, 0, tam_v - 1);

	return 0;
}
