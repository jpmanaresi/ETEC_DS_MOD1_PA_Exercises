#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese"); 
	int i, parA, parB, impA, impB;
	int vetorA[10], vetorB[10];
	
	for (i=0; i<10; i++)
	{
		printf ("\nDigite o %do. valor do Vetor A: ", i+1);
		scanf ("%d", &vetorA[i]);
	}
	for (i=0; i<10; i++)
	{
		printf ("\nDigite o %do. valor do Vetor B: ", i+1);
		scanf ("%d", &vetorB[i]);
	}
	parA=0;
	parB=0;
	impA=0;
	impB=0;
	for (i=0; i<10; i++)
	{
		if (vetorA[i]%2==0)
		{
			parA++;
		}
		else
		impA++;
	}
	for (i=0; i<10; i++)
	{
		if (vetorA[i]%2==0)
		{
			parB++;
		}
		else
		impB++;
	}
	
	printf ("\nA quantidade de valores pares no Vetor A é de: %d", parA);
	printf ("\nA quantidade de valores ímpares no Vetor A é de: %d", impA);
	printf ("\nA quantidade de valores pares no Vetor B é de: %d", parB);
	printf ("\nA quantidade de valores pares no Vetor B é de: %d\n", impA);
	return 0;
}
