#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese"); 
	int i;
	int valor[10];
	
	for (i=0; i<10; i++)
	{
		printf ("\nDigite o %dº valor: ", i+1);
		scanf ("%d", &valor[i]);
	}
	
	for (i=0; i<10; i++)
	{
		printf ("O %dº valor da lista é : %d\n", i+1, valor[i]);
	}
	
	system ("PAUSE");
	return 0;
}
