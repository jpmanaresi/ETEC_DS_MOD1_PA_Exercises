#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system ("color 4E");
	int combo;
	
	printf ("\nBem vindo ao LC Burger!\n 1-Combo 1: Lanche+Fritas - R$ 15,00.\n 2-Combo 2: Lanche+Fritas+Refrigerante R$ 20,00.\nDigite o numero do combo desejado (1/2): ");
	scanf ("%d", &combo);
	
	if (combo==1)
		printf ("\nTotal R$ 15,00.\nRetire seu pedido no balcão!\n");
		
		else 
		{
			if (combo==2)
				printf ("\nTotal R$ 20,00. Retire seu pedido no balcão!\n");
			
			else
			printf ("Por favor, digite um número válido.\n");
		}
	system ("PAUSE");
	return 0;
}
