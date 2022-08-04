#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf ("\nDigite seu número: "); 
	scanf ("%f", &num);
	
	if (num >=100 && num <=200)
		printf ("\nSeu número está entre 100 e 200.\n");
	else
		printf ("\nSeu número não está entre 100 e 200. \n");
	return 0;
}
