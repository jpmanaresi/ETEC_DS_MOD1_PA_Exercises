#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salariob, salariol;
	
	printf ("\nDigite aqui o salario base do funcionario: ");
	scanf ("%f", &salariob);
	
	salariol = (salariob+500)-(salariob/11);
	
	system ("cls");
	
	printf ("\nO salario a receber do funcionario e de : R$ %.2f\n", salariol);
	
	system ("PAUSE");
	
	return 0;
}
