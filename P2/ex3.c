#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	//char* entrada = (char *) malloc(80*sizeof(char));
	//char entrada[80];
	int i, tamanho;

	fgets(entrada, 80, stdin);

	tamanho = strlen(entrada);

	printf("- Tamanho incluindo o \\n: %d\n", tamanho);	
}