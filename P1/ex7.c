#include <stdio.h>

#define NUM 5
#define LIM 2.0

int main () 
{
	float tamanho;
	int numOK = 0;
	int numPeqDefeitos = 0;
	int numGdeDefeitos = 0;
	int i;

	for (i = 0; i < NUM; i++) 
	{
		scanf("%f\n", &tamanho);
		if ((tamanho > LIM*1.05) || (tamanho < LIM*0.95)) { 
			numGdeDefeitos++; }
			else { 
				if ()
					numPeqDefeitos++;
				else
					numOK++;
			}
	}
	printf("OK %d\n", numOK);
	printf("Peq %d\n", numPeqDefeitos);
	printf("Gde %d\n", numGdeDefeitos);
	return 0;
}