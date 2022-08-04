#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int anonasc, dig1ano, dig2ano, perfil;
	printf("Digite seu ano de nascimento: \n");
	scanf ("%d", &anonasc);
	
	if (anonasc>=2000)
	
	{
		dig2ano=anonasc%2000;
		dig1ano=anonasc+20-anonasc;
		perfil=(dig1ano+dig2ano)%5;
	}
	
	else
	{
	dig2ano=anonasc%1900;
	dig1ano=anonasc+19-anonasc;
	perfil=(dig1ano+dig2ano)%5;	
	}
	
	switch (perfil)
	{
		case 0: printf ("Seu perfil é de uma pessoa tímida.\n");
		break;
		case 1: printf ("Seu perfil é de uma pessoa sonhadora.\n");
		break;
		case 2: printf ("Seu perfil é de uma pessoa paqueradora.\n");
		break;
		case 3: printf ("Seu perfil é de uma pessoa atraente.\n");
		break;
		case 4: printf ("Seu perfil é de uma pessoa irresistível.\n");
		break;
		default: printf ("Infelizmente não consegui calcular seu perfil. Tem certeza que não digitou algo errado?\n");
		break;
	}
	system("PAUSE");
	return 0;
}
