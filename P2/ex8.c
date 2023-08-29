#include <stdio.h>

void processaVetor(){
	int* vet;
	int i;
	for (i = 0; i < 3; i++)
		scanf("%d", &vet[i]);

	printf("%d %d %d\n", vet[0], vet[1], vet[2]);
}

int main() {
	processaVetor();
	//printf("%d %d %d", vet[0], vet[1], vet[2]);
	
}