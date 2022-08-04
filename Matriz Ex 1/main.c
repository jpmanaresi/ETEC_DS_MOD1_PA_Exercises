#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");

	int i,j;
	float notas [4][4];
	float soma[4], media[4];
	char nome[4][12];
	
	
	for (i=0; i<4; i++){
		printf ("Digite seu nome: \n");
		scanf ("%s", nome[i]);
		printf ("Digite as notas \n");
		
		for (j=0;j<4;j++){
			printf ("Digite a nota do %do bimestre: \n", j+1);
			scanf ("%f", &notas[i][j]);
			soma[i]= soma[i]+notas[i][j];
			system ("cls");
		}
	}
	
	for (i=0;i<4;i++){
		media[i]=soma[i]/4;
		printf ("A média do aluno %s é: %.2f\n", nome[i], media[i]);
	}
	
	system ("PAUSE");
	return 0;
}
