#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system ("color 5F");
	int opc;
	float valorsd, saldo;
	
	printf ("\nBem vindo(a)!\n Seu saldo � de R$ 500,00. O que voc� deseja fazer?\n 1-Saque.\n 2-Dep�sito.\nDigite sua op��o: ");
	scanf ("%d", &opc);
	system ("cls");	
	if (opc==1)
	{
		printf ("Digite o valor que deseja sacar: R$ ");
		scanf ("%f",&valorsd);
		saldo = 500-valorsd;
		printf ("\nSeu saldo atual � de R$ %.2f\n", saldo);
	}
	else
	
	{
		if (opc==2)
		{
			printf ("Digite o valor do dep�sito: R$ ");
			scanf ("%f",&valorsd);
			saldo = 500+valorsd;
			printf ("\nSeu saldo atual � de R$ %.2f\n", saldo);
		}		
		
		else 
		printf ("ERRO. Favor Digitar uma op��o v�lida\n.");
	}
		system ("PAUSE");
		
	return 0;
}
