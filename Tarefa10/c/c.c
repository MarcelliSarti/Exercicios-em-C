#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int n;
	struct estu {
		char nome[102];
		int ra;
		float p1, p2, media;
	};  struct estu* e;

	scanf("%d\n", &n);

	e = (struct estu*) malloc((n)*sizeof(struct estu));

	for (int i=0; i<n; ++i) {
		fgets(e[i].nome, 102, stdin);
		e[i].nome[strlen(e[i].nome)-1]= 0;
		scanf("%d", &e[i].ra);
		scanf("%f", &e[i].p1);
		scanf("%f", &e[i].p2);
		getchar();
		e[i].media = (e[i].p1 + e[i].p2)/2;
	}

	for (int i=0; i<n; ++i) 
		printf("%d %s\t%.02f\n", e[i].ra, e[i].nome, e[i].media);

	free(e);
	return 0;

}