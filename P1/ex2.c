#include <stdio.h>
#define NUM 5
#define LIM 1.0

int main () {
	float altura;
	int numOK = 0;
	int numAutorizada = 0;
	int numProibidos = 0;
	int i;

	for (i = 0; i < NUM; i++) {
		scanf("%f\n", &altura);

		if (altura >= LIM*0.98) { 
			numOK++; }
			else { 
				if (altura >= LIM*0.95 && altura < LIM*0.97)
					numAutorizada++;
				else
					numProibidos++;
			}
	}
	printf("Liberadas %d\n", numOK);
	printf("Autorizacao %d\n", numAutorizada);
	printf("Proibidas %d\n", numProibidos);
	return 0;
}