#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	printf("Bem vindo! \n");
	printf("Op��es de lanches:");
	printf ("1. BigMac\n2. Quarteir�o\n3. MacChicken\n4. CheddarMacMelt\n5. MacMax\n");
	printf ("Digite a op��o desejada: \n");
	scanf ("%d", &opcao);
	
	switch(opcao)
	{
		case 1: printf ("Voc� escolheu BigMac.\nTotal: R$ 18,00.\nBom apetite!\n");
		break;
		case 2: printf ("Voc� escolheu Quarteir�o.\nTotal: R$ 14,00.\nBom apetite!\n");
		break;
		case 3: printf ("Voc� escolheu MacChicken.\nTotal: R$ 13,00.\nBom apetite!\n");
		break;
		case 4: printf ("Voc� escolheu CheddarMacMelt.\nTotal: R$ 15,00.\nBom apetite!\n");
		break;
		case 5: printf ("Voc� escolheu MacMax.\nTotal: R$ 20,00.\nBom apetite!\n");
		break;
		default: printf ("Op��o Inv�lida.\n");
		break;
	}
	system("PAUSE");
	return 0;
}

