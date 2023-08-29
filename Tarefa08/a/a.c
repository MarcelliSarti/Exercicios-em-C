#include <stdio.h>
#include <math.h>

int main () {
	float euclidiana;

	struct ponto {
		float x[20];
		float y[20];		
	} ponto;

	for (int i = 0; i < 2; ++i)
	{
		scanf("%f", &ponto.x[i]);
		scanf("%f", &ponto.y[i]);
	}
	

	euclidiana = sqrt(pow((ponto.x[0] - ponto.x[1]),2) + (pow((ponto.y[0] - ponto.y[1]),2)));

	if (euclidiana < 0.0000001) {
		printf("os pontos sao iguais\n");
	} else {
		printf("os pontos nao sao iguais\n");
	}
	return 0;
}