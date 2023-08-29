#include <stdio.h>
#include <string.h>

int main () {

	char tipo_perg[10];
	int cont1=0;
	int cont2=0;
	int cont3=0;

	struct cadastro_perg_INT { 
		char pergunta_INT[102];
		int INT_R1, INT_R2, INT_R3, INT_Rcerta;
	} ; struct cadastro_perg_INT cadastro_perg_INT[50];

	struct cadastro_perg_FLOAT {
		char pergunta_FLOAT[102];
		float FLOAT_R1, FLOAT_R2, FLOAT_R3, FLOAT_Rcerta;
	} ; struct cadastro_perg_FLOAT cadastro_perg_FLOAT[50];

	fgets(tipo_perg, 102, stdin);
	
	while (strcmp(tipo_perg, "FIM\n")!=0) {

	if (strcmp (tipo_perg, "INT\n")==0) {
		fgets(cadastro_perg_INT[cont1].pergunta_INT, 102, stdin);

		scanf ("%d", &cadastro_perg_INT[cont1].INT_R1);
		scanf ("%d", &cadastro_perg_INT[cont1].INT_R2);
		scanf ("%d", &cadastro_perg_INT[cont1].INT_R3);
		scanf ("%d", &cadastro_perg_INT[cont1].INT_Rcerta);

		cont1 = cont1 + 1;
	}

	if (strcmp (tipo_perg, "FLOAT\n")==0) {
		fgets(cadastro_perg_FLOAT[cont2].pergunta_FLOAT, 102, stdin);

		scanf ("%f", &cadastro_perg_FLOAT[cont2].FLOAT_R1);
		scanf ("%f", &cadastro_perg_FLOAT[cont2].FLOAT_R2);
		scanf ("%f", &cadastro_perg_FLOAT[cont2].FLOAT_R3);
		scanf ("%f", &cadastro_perg_FLOAT[cont2].FLOAT_Rcerta);
	
		cont2 = cont2 + 1;
	}

		fgets(tipo_perg, 102, stdin);
} 
	struct resp_certa {
			char tipo_perg[10];
			int pergunta;
			int Res_certa;
		}; struct resp_certa resp_certa[50];

	fgets(resp_certa[cont3].tipo_perg, 102, stdin);

	while (strcmp (resp_certa[cont3].tipo_perg, "FIM\n")!=0) {

		scanf ("%d", &resp_certa[cont3].pergunta);
		scanf ("%d", &resp_certa[cont3].Res_certa); 

		cont3 = cont3 + 1;

		fgets(resp_certa[cont3].tipo_perg, 102, stdin);

	}	
	
		for (int i=0; i<cont3; i++) {
			if (strcmp (resp_certa[i].tipo_perg, "INT\n")==0) {
				printf ("Pergunta: %s", cadastro_perg_INT[resp_certa[i].pergunta].pergunta_INT);
				printf ("Alternativa 0: %d\n", cadastro_perg_INT[resp_certa[i].pergunta].INT_R1);
				printf ("Alternativa 1: %d\n", cadastro_perg_INT[resp_certa[i].pergunta].INT_R2);
				printf ("Alternativa 2: %d\n", cadastro_perg_INT[resp_certa[i].pergunta].INT_R3);

					if (cadastro_perg_INT[resp_certa[i].pergunta].INT_Rcerta == resp_certa[i].Res_certa) {
						printf ("Parabens, voce acertou!\n");
					}
					else {
						printf ("Resposta errada, voce perdeu!\n");
					} }

			
			if (strcmp (resp_certa[i].tipo_perg, "FLOAT\n")==0) {
				printf ("Pergunta: %s", cadastro_perg_FLOAT[resp_certa[i].pergunta].pergunta_FLOAT);
				printf ("Alternativa 0: %f\n", cadastro_perg_FLOAT[resp_certa[i].pergunta].FLOAT_R1);
				printf ("Alternativa 1: %f\n", cadastro_perg_FLOAT[resp_certa[i].pergunta].FLOAT_R2);
				printf ("Alternativa 2: %f\n", cadastro_perg_FLOAT[resp_certa[i].pergunta].FLOAT_R3);

					if (cadastro_perg_FLOAT[resp_certa[i].pergunta].FLOAT_Rcerta == resp_certa[i].Res_certa) {
						printf ("Parabens, voce acertou!\n");
					}
					else {
						printf ("Resposta errada, voce perdeu!\n");
					} }
	}

}