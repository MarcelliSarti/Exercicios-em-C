#include <stdio.h>
#include <string.h>

int main(){
	char entrada[82];
	int i, tamanho;

	fgets(entrada, 82, stdin);
	//scanf("%s", entrada);

	tamanho = strlen(entrada);

	printf("- Tamanho incluindo o \\n: %d\n", tamanho);	
	
}