#include <stdio.h>
int main(){

	float notas[20], existe, ultima;
	int verdade;

	/* ler as notas */
	for (int i = 0; i < 20; ++i)
		scanf("%f/n", &notas[i]);

	/* o while é para ficar em um loop infito interrompido caso o n seja negativo */
	while (1 == 1) {

	scanf("%f/n", &existe);

	if (existe < 0)
		break;

	verdade = 0;
	ultima = 0;
	
	for (int z = 0; z<20; ++z) {
		if (notas[z] == existe) {
			if (ultima != existe) {
			printf("existe\n");
			verdade = 1;
			ultima = existe; }
		}
	}
	if (verdade == 0)
		printf("nao existe\n");
	}

	return 0;
}