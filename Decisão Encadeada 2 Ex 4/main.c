#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	printf("Digite um n�mero entre 1 e 12:  \n");
	scanf ("%d", &opcao);
	
	switch (opcao)
	{
		case 1: printf ("N�mero %d corresponde ao m�s de Janeiro.\n", opcao);
		break;
		case 2: printf ("N�mero %d corresponde ao m�s de Fevereiro.\n", opcao);
		break;
		case 3: printf ("N�mero %d corresponde ao m�s de Mar�o.\n", opcao);
		break;
		case 4: printf ("N�mero %d corresponde ao m�s de Abril.\n", opcao);
		break;
		case 5: printf ("N�mero %d corresponde ao m�s de Maio.\n", opcao);
		break;
		case 6: printf ("N�mero %d corresponde ao m�s de Junho.\n", opcao);
		break;
		case 7: printf ("N�mero %d corresponde ao m�s de Julho.\n", opcao);
		break;
		case 8: printf ("N�mero %d corresponde ao m�s de Agosto.\n", opcao);
		break;
		case 9: printf ("N�mero %d corresponde ao m�s de Setembro.\n", opcao);
		break;
		case 10: printf ("N�mero %d corresponde ao m�s de Outubro.\n", opcao);
		break;
		case 11: printf ("N�mero %d corresponde ao m�s de Novembro.\n", opcao);
		break;
		case 12: printf ("N�mero %d corresponde ao m�s de Dezembro.\n", opcao);
		break;
		default: printf ("N�mero inv�lido.\n");
		break;
	}
	system("PAUSE");
	return 0;
}

