#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese"); 
	int i;
	int vetorA[10], vetorB[10];
	
	for (i=0; i<10; i++)
	{
		printf ("\nDigite o %do. valor:", i+1);
		scanf ("%d", &vetorA[i]);
	}
	
	for (i=0; i<10; i++)
	{
		if (i%2==0)
		{
			vetorB[i]=vetorA[i]*5;
			printf ("\nO valor %d do vetor A multiplicado por 5 é igual a: %d", i, vetorB[i]);
		}
		
		else 
		
		{
			vetorB[i]=vetorA[i]+5;
			printf ("\nO valor %d do vetor A somado á 5 é igual a: %d", i, vetorB[i]);
		}
	}
	printf ("\n");
	system ("PAUSE");
	return 0;
}
