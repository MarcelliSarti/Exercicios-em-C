#include <stdio.h>

int main () {
	char input=getchar();

	switch(input){
		case 'A':
			printf("Letra %c\n", input);
			break;
		case 'B':
			printf("Letra %c\n", input+1);
			break;
		case 'C':
			printf("Letra %c\n", input+2);
			break;
		default:
			printf("Opcao invalida\n");
			break;
	}

	return 0;
}