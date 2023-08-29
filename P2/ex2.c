#include <stdio.h>

	struct trap {
		float M, m, h;
	};
	struct trap* A;
	struct trap* B;

int compara_area(struct trap* A, struct trap* B){
	float a1, a2;

	a1=((A->M + A->m)*(A->h)/2);
	a2=((B->M + B->m)*(B->h)/2);

	return(a1>a2?1:0);
}

int main(){

	scanf("%f %f %f", &A.M, &A.m, &A.h);
	scanf("%f %f %f", &B.M, &B.m, &B.h);

	int compara_area();
}