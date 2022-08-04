#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salarioa, salariof;
	
	printf ("Digite aqui seu salario atual: R$");
	scanf ("%f", &salarioa);
	
	salariof = salarioa*(1+(25/100));
	
	printf ("\nSeu novo salario sera R$ %.2f\n", salariof);
	
	system("PAUSE");
	
	return 0;
}
