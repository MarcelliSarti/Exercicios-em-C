#include <stdio.h>

int main () {
	int i,j,k;

	for (i=5; i >= 1; i--) {
		for (k=0; k<5-i; k++) 
			printf("_");

		for (j=1; j<=i+(i-1); j++) 
			printf("*");

		printf("\n");
		
	}

	return 0;
}