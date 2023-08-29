#include <stdio.h>
#include <string.h>

int main() {
	char tipo[7];
	int i = 0, p = 0;

	struct inteiro { 
		char questao[102];
		int R1, R2, R3, certo;		
	} ;	struct inteiro qi[50];

	struct real{ 
		char questao[102];
		float R1, R2, R3;
		int certo;		
	} ; struct real qr[50];

	struct resp{ 
		char tipo[7];
		int q, r;		
	} ; struct resp r[50];

	while(1 == 1) {
		fgets(tipo, 7, stdin);

		if (strcmp(tipo,"FIM\n") == 0)
			break;

		if (strcmp(tipo,"INT\n") == 0) {
			fgets(qi[i].questao, 102, stdin);
			scanf("%d %d %d", &qi[i].R1, &qi[i].R2, &qi[i].R3);
			scanf("%d", &qi[i].certo);
			i++;
		} 

		if (strcmp(tipo,"FLOAT\n") == 0) {	
			fgets(qr[p].questao, 102, stdin);
			scanf("%f %f %f", &qr[p].R1, &qr[p].R2, &qr[p].R3);
			scanf("%d", &qr[p].certo);
			p++;	
		}
	}

	int t=0;
	while(1 == 1) {
		fgets(r[t].tipo, 7, stdin);

		if (strcmp(r[t].tipo,"FIM\n") == 0)
			break;
	
		scanf("%d", &r[t].q);
		scanf("%d", &r[t].r);

		//printf("Q: %d r: %d T: %d\n", r[t].q, (qr[r[t].q].certo), t);

		if (strcmp(r[t].tipo,"INT\n") == 0) {
			if ((r[t].r) != (qi[r[t].q].certo)) { 
				t++;
				break;
				 } }
		
		if (strcmp(r[t].tipo,"FLOAT\n") == 0) {
			if ((r[t].r) != (qr[r[t].q].certo)) {
				t++;
				break; 
				} }

		t++;
		} 

	printf("Prepare-se para o Show do Miltao!\n");

	for (int w=0; w<t; ++w) {
		if(strcmp((r[w].tipo), "INT\n") == 0) {
			printf("Pergunta: %s", qi[r[w].q].questao);
			printf("Alternativa 0: %d\n", qi[r[w].q].R1);
			printf("Alternativa 1: %d\n", qi[r[w].q].R2);
			printf("Alternativa 2: %d\n", qi[r[w].q].R3);
			if ((qi[r[w].q].certo) == (r[w].r)) {
				printf("Parabens, voce acertou!\n"); }
			else {
				printf("Resposta errada, voce perdeu!\n"); } }
		else
			if(strcmp((r[w].tipo), "FLOAT\n") == 0) {
			printf("Pergunta: %s", qr[r[w].q].questao);
			printf("Alternativa 0: %.02f\n", qr[r[w].q].R1);
			printf("Alternativa 1: %.02f\n", qr[r[w].q].R2);
			printf("Alternativa 2: %.02f\n", qr[r[w].q].R3);
			if ((qr[r[w].q].certo) == (r[w].r)) {
				printf("Parabens, voce acertou!\n"); }
			else {
				printf("Resposta errada, voce perdeu!\n"); } }
	}
	return 0;
}