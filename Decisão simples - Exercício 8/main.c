#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char senha[5];
	
	printf("Digite sua senha (5 caracteres):  \n");
	scanf ("%s", &senha);
	
	if (strcmp(senha, "asdfg")==0)
	printf ("\nSua senha está correta. Bem vindo!\n");
	else 
	printf ("\nSENHA INCORRETA.\n");
	system("PAUSE");
	return 0;
}
