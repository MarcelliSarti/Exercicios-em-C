#include <stdio.h>
#include <math.h>
#define l 10

int main () {
	int N, X, matriz[l][l], correcao[l][l], corrigida[l][l];
	float soma, media, desvio, dif = 0, desvioF;

	scanf("%d/n", &N);
	scanf("%d/n", &X);

	for (int i = 0; i < N; ++i) {
		for (int w = 0; w < N; ++w) {
			scanf("%d", &matriz[i][w]);
		}
	}

	for (int i = 0; i < N; ++i) {
		for (int w = 0; w < N; ++w) {
			scanf("%d", &correcao[i][w]);
		}
	}

	printf("Matriz corrigida\n");

	for (int i = 0; i < N; ++i) {
		for (int w = 0; w < N; ++w) {
			corrigida[i][w] = (matriz[i][correcao[w][i]] * X);
			printf("%d ", (matriz[i][correcao[w][i]] * X));
		}
		printf("\n");
	}

	printf("Somas::");

	for (int i = 0; i < N; ++i)	{
		soma = 0;
		for (int w = 0; w < N; ++w) {
			soma = soma + corrigida[w][i];
		}
	printf("%.2f ", soma);
	}

	printf("\n");

	printf("Medias::");

	for (int i = 0; i < N; ++i)	{
		soma = 0;
		media = 0;
		for (int w = 0; w < N; ++w) {
			soma = soma + corrigida[w][i];
		}
		media = soma / N;
		printf("%.2f ", media);
	}

	printf("\n");

	printf("Desvios::");

	for (int i = 0; i < N; ++i)	{
		soma = 0;
		media = 0;

		for (int w = 0; w < N; ++w) { 
			soma = soma + corrigida[w][i];
		}

		media = soma / N;

		desvio = 0;
		desvioF = 0;

		for (int t = 0; t < N; ++t) {
			dif = (corrigida[t][i]-media);
			desvio = desvio + (dif * dif); 
		}

		desvioF = sqrt(desvio/N);

		printf("%.2f ", desvioF);
		
	}

	printf("\n");	

	//printf("OI \n");

	return 0;
}