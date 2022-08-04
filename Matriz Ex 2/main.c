#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int matriz[5][5];
	int i,j;
	
	for (i=0; i<5; i++){
		for(j=0; j<5; j++){

		printf ("\nDigite o valor da linha %d, coluna %d: ",i+1, j+1);
		scanf ("%d", &matriz[i][j]);
		}
	}
	system ("cls");
	printf ("\nSua matriz é: \n");
	
	for (i=0; i<5; i++){
		printf ("\n");
			for(j=0; j<5; j++){
			printf ("%d, ", matriz[i][j]);
			}
		}
	system ("PAUSE");
	return 0;
}
