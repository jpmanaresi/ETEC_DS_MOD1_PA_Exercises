#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float x, y;
	
	printf ("\nDigite aqui o 1� valor: ");
	scanf ("%f",&x);
	printf ("\nDigite aqui o 2� valor: ");
	scanf ("%f",&y);
	
	if (x == y)
		printf ("\nOs valores s�o iguais.\n");
	
	else
		printf ("\nOs valores s�o diferentes.\n");
	return 0;
}
