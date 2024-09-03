//Ex2

#include <stdio.h>

int main () {
	float num1, num2;
	float soma, sub, mult, div;
	
	printf ("Num 1: ");
	scanf ("%f", &num1);
	
	printf ("Num 2: ");
	scanf ("%f", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	div = num1 / num2;
	mult = num1 * num2;
	
	printf ("soma: %.2f", soma);
	printf ("sub: %.2f", sub);
	printf ("div: %.2f", div);
	printf ("mult: %.2f", mult);
	
	return 0;
}
