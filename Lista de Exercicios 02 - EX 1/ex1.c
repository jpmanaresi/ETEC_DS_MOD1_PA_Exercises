#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf ("\nInsira o número: ");
	scanf ("%f", &num);
	
	if (num > 10) 
		printf ("\nO número digitado é maior que 10.\n");
		
	else 
		printf ("\nERRO. Favor digitar um número válido.\n");	
	
	system ("PAUSE");
	return 0;
	
}
