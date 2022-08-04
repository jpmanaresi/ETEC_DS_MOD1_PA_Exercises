#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	printf("Digite um número entre 1 e 12:  \n");
	scanf ("%d", &opcao);
	
	switch (opcao)
	{
		case 1: printf ("Número %d corresponde ao mês de Janeiro.\n", opcao);
		break;
		case 2: printf ("Número %d corresponde ao mês de Fevereiro.\n", opcao);
		break;
		case 3: printf ("Número %d corresponde ao mês de Março.\n", opcao);
		break;
		case 4: printf ("Número %d corresponde ao mês de Abril.\n", opcao);
		break;
		case 5: printf ("Número %d corresponde ao mês de Maio.\n", opcao);
		break;
		case 6: printf ("Número %d corresponde ao mês de Junho.\n", opcao);
		break;
		case 7: printf ("Número %d corresponde ao mês de Julho.\n", opcao);
		break;
		case 8: printf ("Número %d corresponde ao mês de Agosto.\n", opcao);
		break;
		case 9: printf ("Número %d corresponde ao mês de Setembro.\n", opcao);
		break;
		case 10: printf ("Número %d corresponde ao mês de Outubro.\n", opcao);
		break;
		case 11: printf ("Número %d corresponde ao mês de Novembro.\n", opcao);
		break;
		case 12: printf ("Número %d corresponde ao mês de Dezembro.\n", opcao);
		break;
		default: printf ("Número inválido.\n");
		break;
	}
	system("PAUSE");
	return 0;
}

