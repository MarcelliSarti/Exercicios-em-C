#include <stdio.h>

int main() {
	int x[10], y[10];

	for (int i = 0; i < 10; ++i)
		scanf("%d/n", &x[i]);

	for (int z = 0; z < 10; ++z)
		scanf("%d/n", &y[z]);

	for (int w = 0; w < 10; ++w)
		printf("%d|%d|", x[w], y[w]);

	printf("\n");
	return 0;
}