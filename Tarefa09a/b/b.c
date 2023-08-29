#include <stdio.h>
#include <math.h>

float media(float N1, float N2, char tipo);

int main() {
	float N1, N2;
	char tipo;

	scanf("%c\n", &tipo);
	scanf("%f", &N1);
	scanf("%f", &N2);

	printf("%.03f\n", media(N1, N2, tipo));

	return 0;
}

float media(float N1, float N2, char tipo) {
	float media;

	if (tipo == 'A')
		media = (N1 + N2)/2;
	if (tipo == 'B')
		media = sqrt(N1 * N2);

	return media;

}

