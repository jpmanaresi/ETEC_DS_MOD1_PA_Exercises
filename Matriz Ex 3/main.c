#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int matriz1[5][5], matriz2 [5][5];
	int soma[2];
	int i, j;
	
	for(i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf ("\nDigite o valor da linha %d, coluna %d da matriz 1: ", i+1, j+1);
			scanf ("%d", &matriz1[i][j]);
			soma[1]=soma[1]+matriz1[i][j];
			system("cls");	
		}
		
	}
	for(i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf ("\nDigite o valor da linha %d, coluna %d da matriz 2: 
			4", i+1, j+1);
			scanf ("%d", &matriz2[i][j]);
			soma[2]=soma[2]+matriz2[i][j];
			system("cls");	
		}
		
	}
	
	printf ("A soma da matriz 1 é %d.\n", soma[1]);
	printf ("A soma da matriz 2 é %d.\n", soma[2]);
	
	system ("PAUSE");
	return 0;
	
}
