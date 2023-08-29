#include <stdio.h>

 float mat = { 9.2,9.3,1.8,7.8,
				4.6,6.8,4.9,8,
				7.6,3.4,7.9,1.5,
				9.2,8.5,8,4.4 };

float processaMatriz(float mat[][4], int parametro){
	float res = 0.0;
	int i;

	for (int i = 0; i < 4; ++i)
		res += mat[parametro][i];

	return res;
}

int main() {
	int parametro;
	
	scanf("%d", &parametro);
	printf("%d\n", processaMatriz(mat[][4], parametro));

	
}