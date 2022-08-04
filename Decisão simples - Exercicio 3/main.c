#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, soma;
	
	printf ("Digite o 1º número:");
	scanf ("%f", &n1);
	printf ("Digite o 2º número:");
	scanf ("%f", &n2);
	
	soma= n1+n2;
	
	if (soma>=26)
	
	printf("\n Sua soma é maior que 25");
	
	else
	
	system("PAUSE");
	return 0;
}
