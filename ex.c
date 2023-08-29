#include <stdio.h>
#include <string.h>

int main() {
	char tipo[7];
	int i = 0, p = 0;

	struct QINT { 
		char questao[102];
		int R1, R2, R3, certo;		
	} ;	struct QINT P_I[50];

	struct QFLOAT{ 
		char questao[102];
		float R1, R2, R3;
		int certo;		
	} ; struct QFLOAT Q_F[50];

	struct resposta{ 
		char tipo[7];
		int q, r;		
	} ; struct resposta rep[50];

	fgets(tipo, 7, stdin);
	while(strcmp(tipo, "FIM\n") != 0) {


		if (strcmp(tipo,"FIM\n") == 0)
			break;

		if (strcmp(tipo,"INT\n") == 0) {
			fgets(P_I[i].questao, 102, stdin);
			scanf("%d %d %d", &P_I[i].R1, &P_I[i].R2, &P_I[i].R3);
			scanf("%d", &P_I[i].certo);
			i++;
		} 

		if (strcmp(tipo,"FLOAT\n") == 0) {	
			fgets(Q_F[p].questao, 102, stdin);
			scanf("%f %f %f", &Q_F[p].R1, &Q_F[p].R2, &Q_F[p].R3);
			scanf("%d", &Q_F[p].certo);
			p++;	
		}
	fgets(tipo, 7, stdin);
	}

	int t=0;
	fgets(rep[t].tipo, 7, stdin);
	while(strcmp(rep[t].tipo,"FIM\n") != 0) {
		

		if (strcmp(rep[t].tipo,"FIM\n") == 0)
			break;
	
		scanf("%d", &rep[t].q);
		scanf("%d", &rep[t].r);

		if (strcmp(rep[t].tipo,"INT\n") == 0) {
			if ((rep[t].r) != (P_I[rep[t].q].certo)) { 
				t++;
				break;
				 } }
		
		if (strcmp(rep[t].tipo,"FLOAT\n") == 0) {
			if ((rep[t].r) != (Q_F[rep[t].q].certo)) {
				t++;
				break; 
				} }

		t++;

	fgets(rep[t].tipo, 7, stdin);
		} 

	printf("Prepare-se para o Show do Miltao!\n");

	for (int w=0; w<t; ++w) {
		if(strcmp((rep[w].tipo), "INT\n") == 0) {
			printf("Pergunta: %s", P_I[rep[w].q].questao);
			printf("Alternativa 0: %d\n", P_I[rep[w].q].R1);
			printf("Alternativa 1: %d\n", P_I[rep[w].q].R2);
			printf("Alternativa 2: %d\n", P_I[rep[w].q].R3);
			if ((P_I[rep[w].q].certo) == (rep[w].r)) {
				printf("Parabens, voce acertou!\n"); }
			else {
				printf("Resposta errada, voce perdeu!\n"); } }
		else
			if(strcmp((rep[w].tipo), "FLOAT\n") == 0) {
			printf("Pergunta: %s", Q_F[rep[w].q].questao);
			printf("Alternativa 0: %.02f\n", Q_F[rep[w].q].R1);
			printf("Alternativa 1: %.02f\n", Q_F[rep[w].q].R2);
			printf("Alternativa 2: %.02f\n", Q_F[rep[w].q].R3);
			if ((Q_F[rep[w].q].certo) == (rep[w].r)) {
				printf("Parabens, voce acertou!\n"); }
			else {
				printf("Resposta errada, voce perdeu!\n"); } }
	}
	return 0;
}