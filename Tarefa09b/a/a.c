#include <stdio.h>
#include <math.h>

int A[10];
int B[10];

void ex1 (){
	for (int i = 0; i < 10; ++i) {
		scanf("%d", &A[i]);
		B[i] = pow(A[i], 3);
	}

	for (int i = 0; i < 10; ++i)
		printf("%d\n",B[i]);
}

int main () {
		ex1();
	
}