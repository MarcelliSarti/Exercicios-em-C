#include <stdio.h>

int main() {
	float produto[10], valor[10], y;
	int x;

	for (int i = 0; i < 10; ++i)
		scanf("%f/n", &produto[i]);

	for (int z = 0; z < 10; ++z)
		scanf("%f/n", &valor[z]);

	for (int w = 0; w < 10; ++w)
	{
		x += produto[w];
		y += valor[w] * produto[w];
	}

	printf("O lucro foi de %.03f e a quantidade de produtos vendidos foi de %d\n", y, x);
	
	return 0;
}