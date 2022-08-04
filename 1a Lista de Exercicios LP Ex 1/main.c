#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, soma;
	
	printf ("\nDigite o valor do 1o numero: ");
	scanf ("%d", &n1);
printf ("\nDigite o valor do 2o numero: ");
	scanf ("%d", &n2);
	printf ("\nDigite o valor do 3o numero: ");
	scanf ("%d", &n3);
	printf ("\nDigite o valor do 4o numero: ");
	scanf ("%d", &n4);
	
	soma = n1+n2+n3+n4;
	
	printf ("\nO resultado da soma e %d.\n", soma);
	
	system ("PAUSE");
	return 0;
}
