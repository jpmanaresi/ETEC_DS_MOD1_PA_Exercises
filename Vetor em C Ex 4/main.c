#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese"); 
	int num[5], aux, i, j;
	
	for (i=0; i<5; i++)
	{
		printf ("Digite o %d° valor: ", i+1);
		scanf ("%d", &num[i]);
	}
	
	for (i=0; i<5; i++)
	{
		for (j=i+1; j<6; j++)
		{
			if (num[i]>num[j])
			{
				aux=num[i];
				num[i]=num[j];
				num[j]=aux;
			}
		}
	}
	printf ("\nNúmeros em ordem crescente: ");
	
	for (i=0; i<5; i++)
	{
		printf ("%d ", num[i]);
	}
	printf (".\n");
	
	system("PAUSE");
	return 0;
}
