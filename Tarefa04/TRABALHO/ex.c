#include <stdio.h>

int main(){
	int N, SOMA;

	/* defini a quantidade de digitos = 0 para iniciar a soma */
	SOMA=0;
	/* lê a quantidade de linhas que terá o triângulo*/
	scanf("%d/n", &N);

/* esse for é para percorrer a quantidade de linhas a ser printada */
	for (int i = 1; i <= N; ++i)
	{
		/* Esse for percorrerá a quantidade de digitos a ser printado em cada linha */
		for (int z = 1; z <= i; ++z)
		{	
			/* Se as linhas forem pares como 2,3,6 ele printará 0 */
			if (i%2 == 0) {
				printf("0");
				/* essa soma, soma a quantidade de digitos do triângulo paea exibir no final*/
				SOMA=SOMA+1;
			}
			/* para as linhas ímpares 1,3,5 ele printará 1 */
			else { 
				printf("1");
				/* essa soma, soma a quantidade de digitos do triângulo paea exibir no final*/
				SOMA=SOMA+1;
				if (z == i)
					/* caso seja o último dígito 1 ele printará a quantidade máxima q foi digitada que será o mesmo que a soma de todos os 1 printados */
					printf("=%d", i);
			}
		}
	/* ele pula a linha para que o triangulo seja formado corretamente */
	printf("\n");
	}
	/* printa a qauntidade de dígitos */
	printf("%d\n", SOMA);
}