#include <stdio.h>
#include <stdlib.h>

int main(){

	float** mat;
	float** trp;
	
	int m, n, x = 0;

	scanf("%d %d", &m, &n);

	mat=(float**) malloc((m)*sizeof(float*));

	for (int i=0; i<m; ++i) 
		mat[i]=(float*) malloc((n)*sizeof(float));

	trp=(float**) malloc((n)*sizeof(float*)); //faz a alocação ao contrário pq é transporta

	for (int i=0; i<n; ++i) 
		trp[i]=(float*) malloc((m)*sizeof(float));

	for (int i=0; i<m; ++i) {
		for (int j=0; j<n; ++j)
			scanf("%f",&mat[i][j]);
	}

	for (int i=0; i<n; ++i) {
		for (int j=0; j<m; ++j)
			trp[i][j] = mat[j][i];
	}

	for (int i=0; i<m; ++i) {
		for (int j=0; j<n; ++j)
			if (trp[i][j] != mat[i][j]) 
				x++; 
	}

	if (x == 0)
		printf("Eh simetrica\n");
	else
		printf("Nao eh simetrica\n");

	return 0;

}