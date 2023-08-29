#include <stdio.h>

int main () {
	int IDs[10]={99184, 55672, 12366, 43689, 27199, 48199, 66321, 45485, 11187};
	int input, i=0;

	scanf("%d", &input);

	while ((IDs[i] != input) && (i<=10))
		i++;

	if (i<=10)
		printf("Presente em %d\n", i);
	else
		printf("Ausente.\n");
	
	return 0;
}