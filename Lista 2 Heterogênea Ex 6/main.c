#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char estcivil;
	printf("Digite seu estado civil (S, C, D ou V) \n");
	scanf ("%c", &estcivil);
	
	switch (estcivil)
	{
		case 'S': printf ("Seu estado civil é Solteiro.\n");
		break;
		case 'C': printf ("Seu estado civil é Casado.\n");
		break;
		case 'D': printf ("Seu estado civil é Divorciado.\n");
		break;
		case 'V': printf ("Seu estado civil é Viuvo.\n");
		break;
		default: printf ("Opção Inválida.\n");
	}
	
	
	system("PAUSE");
	
	
	return 0;
}
