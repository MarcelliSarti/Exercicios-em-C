#include <stdio.h>

#define n 20

int main(){
	int m[n][n];
	int x, y;

	scanf("%d %d/n", &x, &y);

	for (int i = 0; i < x; ++i)
	{
		for (int w = 0; w < y; ++w)
		{
			scanf("%d/n", &m[i][w]);
		}
	}

	for (int i = 0; i < y; ++i)
	{
		for (int w = 0; w < x; ++w)
		{
			printf("%d ", m[w][i]);
		}
		printf("\n");
	}

}