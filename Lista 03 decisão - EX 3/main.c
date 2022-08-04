#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system ("color 5F");
	int opc;
	float valorsd, saldo;
	
	printf ("\nBem vindo(a)!\n Seu saldo é de R$ 500,00. O que você deseja fazer?\n 1-Saque.\n 2-Depósito.\nDigite sua opção: ");
	scanf ("%d", &opc);
	system ("cls");	
	if (opc==1)
	{
		printf ("Digite o valor que deseja sacar: R$ ");
		scanf ("%f",&valorsd);
		saldo = 500-valorsd;
		printf ("\nSeu saldo atual é de R$ %.2f\n", saldo);
	}
	else
	
	{
		if (opc==2)
		{
			printf ("Digite o valor do depósito: R$ ");
			scanf ("%f",&valorsd);
			saldo = 500+valorsd;
			printf ("\nSeu saldo atual é de R$ %.2f\n", saldo);
		}		
		
		else 
		printf ("ERRO. Favor Digitar uma opção válida\n.");
	}
		system ("PAUSE");
		
	return 0;
}
