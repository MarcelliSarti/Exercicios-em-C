#include <stdio.h>

int main () {

	float imc;

	struct corpo {
		float altura;
		float peso;
		char nome[100];		
	} corpo;

		scanf("%f\n", &corpo.altura);
		scanf("%f\n", &corpo.peso);
		fgets(corpo.nome, 101, stdin);

		imc = corpo.peso / (corpo.altura * corpo.altura);

		printf("%.3f\n", imc);
	

	return 0;
}