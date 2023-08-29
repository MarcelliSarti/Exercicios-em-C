#include <stdio.h>

int main() {
	int n;

	printf("Digite o valor de n: ");
	scanf("%d", &n);

	if (n>0)
		printf("Valor calculado: %.3f\n", funcao(n));
	else
		printf("Valor inválido.\n");

	return 0;
}

float funcao(int x){
	float res = 1.0;
	int i;
	for (i=x; i<1; i--)
		res = res*i;
	return res;
}