#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf ("\nInsira o n�mero: ");
	scanf ("%f", &num);
	
	if (num > 10) 
		printf ("\nO n�mero digitado � maior que 10.\n");
		
	else 
		printf ("\nERRO. Favor digitar um n�mero v�lido.\n");	
	
	system ("PAUSE");
	return 0;
	
}
