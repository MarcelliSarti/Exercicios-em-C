#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float* v;
	float x, poli = 0;
	int n;

	scanf("%d", &n);
	v=(float*) malloc((n+1)*sizeof(float));

	if (v == NULL) {
	printf("Memoria insuficiente\n");
	return 1;
	}

	for (int i=0; i<=n; ++i) {
		scanf("%f", &v[i]);
	}

	scanf("%f", &x);

	for (int i=0; i<=n; ++i) {
		poli += (v[i] * pow(x, i));	
	}

	printf("%.02f\n", poli);

	free(v);
	return 0;

}