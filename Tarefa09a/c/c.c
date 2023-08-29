#include <stdio.h>
#include <math.h>

float soma(float N1, float N2);
float subt(float N1, float N2);
float mult(float N1, float N2);
float div(float N1, float N2);
float expo(float N1, float N2);

int main() {
	float N1, N2;
	char op;
	scanf("%f%c%f", &N1, &op, &N2);

	switch (op) {
	case '+':
		printf("%.03f\n", soma(N1, N2));
		break;
	case '-':
		printf("%.03f\n", subt(N1, N2));
		break;
	case '*':
		printf("%.03f\n", mult(N1, N2));
		break;
	case '/':
		printf("%.03f\n", div(N1, N2));
		break;
	case '^':
		printf("%.03f\n", expo(N1, N2));
		break;
	}
	return 0;
}

float soma(float N1, float N2){
	float soma = N1 + N2;
	return soma;
}

float subt(float N1, float N2){
	float subt = N1 - N2;
	return subt;
}

float mult(float N1, float N2){
	float mult = N1 * N2;
	return mult;
}

float div(float N1, float N2){
	float div = N1 / N2;
	return div;
}

float expo(float N1, float N2){
	float exp = pow(N1, N2);
	return exp;
}

