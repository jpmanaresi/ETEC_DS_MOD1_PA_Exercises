#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float x, y, z;
	
	printf ("\nDigite aqui o primeiro valor do intervalo � ser comparado: ");
	scanf ("%f", &x);
	printf ("\nDigite aqui o segundo valor do intervalo � ser comparado: ");
	scanf ("%f", &y);
	
	printf ("\nDigite o n�mero: ");
	scanf("%f",&z);
	
	if (z>=x&&z<=y)
	printf ("\nO n�mero pertence ao intervalo informado.\n");
	
	else
	printf ("\nO n�mero N�O pertence ao intervalo informado.\n");
	
	system ("PAUSE");
	
	return 0;
}
