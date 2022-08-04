#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float alt, pid;
	char sexo[7];
	setlocale (LC_ALL, "Portuguese");
	printf ("Você e homem ou mulher? ");
	scanf("%s", &sexo);
	printf("\nDigite sua altura: \n");
	scanf ("%f", &alt);
	
	
	if (strcmp(sexo, "homem")==0)
	
	 pid =(72.7*alt)-58;
	
	else
	 pid =(62.1*alt)-44.7;
	
	printf ("\nSeu peso ideal e %.2f kg.\n", pid);
	
	system ("PAUSE");
	return 0;
}
