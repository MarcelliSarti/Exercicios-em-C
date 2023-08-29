/*Tarefa 03 - c*/
#include <stdio.h>

int main () {
	float num1;
	float num2;
	float result;
	char oper;

	scanf("%f%c%f", &num1, &oper, &num2);

	if      (oper == '+')
		result = num1 + num2;
	else if (oper == '-')
		result = num1 - num2;
	else if (oper == '*')
		result = num1 * num2;
	else if (oper == '/')
		result = num1 / num2;
	else
		printf("Operador invalido\n");

	if (((oper == '+' || oper == '-') || oper == '*') || oper == '/')
		printf("%.03f%c%.03f=%.03f\n", num1, oper, num2, result);
}