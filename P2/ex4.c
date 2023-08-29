#include <stdio.h>
#define TAM 5

int A = {5,8,6,6,6};
int B = {9,6,3,9,10};

int * processa(int*A, int*B) {
	int resultado[TAM];
	int i;

	for (int i = 0; i < TAM; i++)
	{
		resultado[i] = A[i] * B[i];
	}

	return resultado;
}

int main() {
	processa(A, B);
	
}