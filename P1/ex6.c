#include <stdio.h>

int main () {
	int x;
	int y=0;
	int i=0;

	scanf("%d", &x);

	for (i = 0; i <= 5; ++i)
	{
		y+=+i*x;
	}

	printf("%d\n", y);
	
}