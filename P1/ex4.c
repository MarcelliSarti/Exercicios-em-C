#include <stdio.h>

int main () {
	int entrada;
	int resultado = 1;

	scanf("%d", &entrada);

	do{
		resultado += entrada;
		scanf("%d", &entrada);
	} while (entrada != 0 && entrada > 0);

	printf("%d\n", resultado);

	return 0;
}