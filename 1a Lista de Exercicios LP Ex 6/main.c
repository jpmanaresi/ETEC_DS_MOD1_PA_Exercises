#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float salariob, salariol;
	
	printf ("\nDigite aqui o salario: R$ ");
	scanf ("%f", &salariob);
	
	salariol = salariob*(1+(10/100))-(salariob*(15/100));
	
	system ("cls");
	printf ("\nO salario liquido do funcionario e de R$ %.2f\n", salariol);
	
	system ("PAUSE");
	return 0;
}
