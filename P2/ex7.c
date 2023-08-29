#include <stdio.h>
#include <string.h>

int main(){
	char entrada[82];
	int i, tamanho;

	fgets(entrada, 82, stdin);

	tamanho = strlen(entrada);

	printf("- Tamanho incluindo o \\n: %d\n", tamanho);	
	
	printf("- Caracteres: ");
	for(i=0; i<tamanho; i++){
		if (i % 2 != 0)
			printf("%s", entrada[i]);
		
	}
}