#include <stdio.h> 
#include <string.h>

int main(){
	char texto1[101];
	char texto2[101];

	int x = 0;

	fgets(texto1, 101, stdin);

	texto1[strlen(texto1)-1]= 0;

	for (int i = strlen(texto1)-1; i <= strlen(texto1)-1; --i) {
		texto2[x]=texto1[i];
		x++;
	}

	if (strncasecmp (texto1, texto2) == 0) 
		printf("Esta palavra e um palindromo\n");
	else
		printf("Esta palavra nao e um palindromo\n");

	return 0;
}