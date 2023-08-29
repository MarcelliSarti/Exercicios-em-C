#include <stdio.h> 
#include <string.h>

int main(){
	char texto[81];

	fgets(texto, 81, stdin);

	for (int i = strlen(texto)-2; i <= strlen(texto)-2; --i)
		printf("%c", texto[i]);

	printf("\n");

	return 0;
}