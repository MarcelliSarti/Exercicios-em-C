#include <stdio.h>
#include <math.h>

float volume_esfera (float raio){
	float volume = (4 * 3.14159 * (pow(raio,3)))/3;
	return volume;
}

int main () {
	float r;
	scanf("%f", &r);
	printf("%.02f\n", volume_esfera(r));
}