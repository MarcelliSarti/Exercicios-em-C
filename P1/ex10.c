#include <stdio.h>

int main () {
	int x;
	int y=1;
	int z=1;
	int i=1;

	scanf("%d", &x);

	for (i = 1; i < x; ++i)
	{
		y=y+2;
		z=z+y;
	}
	printf("%d\n", z);
}