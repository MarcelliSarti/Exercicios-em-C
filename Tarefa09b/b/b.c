#include <stdio.h>

int a, bi, c, di;
char op;

void soma(){
	int somaR = a + c;
	int somaI = bi + di;
	printf("%d + %di\n", somaR, somaI);
}

void mult() {
	int multR = (a*c)-(bi*di);
	int multI = (a*di)+(bi*c);
	printf("%d + %di\n", multR, multI);
}

int main() {
	scanf("%d %d %c %d %d", &a, &bi, &op, &c, &di);

	if (op == '+')
		soma();
	else if (op == '*') 
		mult();
}

