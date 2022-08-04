#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, media;
	
	printf ("\nDigite aqui sua 1a nota: ");
	scanf ("%f", &n1);
	printf ("\nDigite aqui sua 2a nota: ");
	scanf ("%f", &n2);
	printf ("\nDigite aqui sua 3a nota: ");
	scanf ("%f", &n3);
	printf ("\nDigite aqui sua 4a nota: ");
	scanf ("%f", &n4);
	
	media =(n1+n2+n3+n4)/4;
	
	if (media>=7)
		printf ("\nVocê foi aprovado com média %.2f. Parabéns!\n", media);
	
	else 
		printf ("\nVocê foi reprovado. Burro.\n");
		
	system("PAUSE");
	return 0;
}
