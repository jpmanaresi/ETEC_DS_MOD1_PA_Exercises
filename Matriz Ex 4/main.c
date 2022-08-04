#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int matriz[10][12];
	int i, j, soma;
	
	soma=0;
	
	for (i=0; i<10; i++){
		for (j=0;j<12;j++){
			
			printf ("\nDigite o valor da linha %d, coluna %d:  ", i+1, j+1);
			scanf ("%d", &matriz[i][j]);
			soma=soma+matriz[i][j];
			system("cls");
		}
	}
	printf ("\nA soma dos valores das matrizes é igual a: %d\n", soma);
	
	system ("PAUSE");
	return 0;
}
