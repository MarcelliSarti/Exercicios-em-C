#include <stdio.h>

int main (){
	int n, par, impar;

	par = 0;
	impar = 0;
	for (int i = 1; i <= 10; ++i)
	{
		scanf("%d/n", &n);
		if (n%2 == 0)
			par = par + 1;
		else
			impar = impar + 1;
	}

	printf("%d pares, %d impares\n", par, impar);

	return 0;
}