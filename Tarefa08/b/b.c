#include <stdio.h>

int main () {

	struct ponto {
		int x[20];
		int y[20];		
	} ponto;

	for (int i = 0; i < 4; ++i)
	{
		scanf("%d", &ponto.x[i]);
		scanf("%d", &ponto.y[i]);
	}

	if ((ponto.x[0] <= ponto.x[2]) && (ponto.x[2] <= ponto.x[1]) && (ponto.y[0] <= ponto.y[2]) && (ponto.y[2] <= ponto.y[1]) && 
		(ponto.x[0] <= ponto.x[3]) && (ponto.x[3] <= ponto.x[1]) && (ponto.y[0] <= ponto.y[3]) && (ponto.y[3] <= ponto.y[1])) {
		printf("o segundo retangulo esta contido no primeiro\n");
	} else {
		printf("o segundo retangulo nao esta contido no primeiro\n");
	}
	return 0;
}