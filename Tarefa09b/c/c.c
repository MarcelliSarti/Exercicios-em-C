#include <stdio.h>
#define L 100

int tam, vet[L];

void busca(){
	int maior = vet[0], menor = vet[0];
	for (int i = 0; i < tam; ++i) {
		if (vet[i] > maior)
			maior = vet[i];
		if (vet[i] < menor)
			menor = vet[i];
	}

	printf("maior valor: %d\n", maior);
	printf("menor valor: %d\n", menor);
}

int main() {
	scanf("%d", &tam);

	for (int i = 0; i < tam; ++i) {
		scanf("%d", &vet[i]);
	}

	busca();
}



