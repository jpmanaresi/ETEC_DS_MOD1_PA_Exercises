#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	printf("Bem vindo! \n");
	printf("Opções de lanches:");
	printf ("1. BigMac\n2. Quarteirão\n3. MacChicken\n4. CheddarMacMelt\n5. MacMax\n");
	printf ("Digite a opção desejada: \n");
	scanf ("%d", &opcao);
	
	switch(opcao)
	{
		case 1: printf ("Você escolheu BigMac.\nTotal: R$ 18,00.\nBom apetite!\n");
		break;
		case 2: printf ("Você escolheu Quarteirão.\nTotal: R$ 14,00.\nBom apetite!\n");
		break;
		case 3: printf ("Você escolheu MacChicken.\nTotal: R$ 13,00.\nBom apetite!\n");
		break;
		case 4: printf ("Você escolheu CheddarMacMelt.\nTotal: R$ 15,00.\nBom apetite!\n");
		break;
		case 5: printf ("Você escolheu MacMax.\nTotal: R$ 20,00.\nBom apetite!\n");
		break;
		default: printf ("Opção Inválida.\n");
		break;
	}
	system("PAUSE");
	return 0;
}

