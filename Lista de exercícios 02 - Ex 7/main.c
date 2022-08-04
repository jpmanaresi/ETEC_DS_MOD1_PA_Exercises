#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float custof, pfinal;
	char pcd[1];
	printf ("\nDigite o custo de produção do veículo: ");
	scanf ("%f", &custof);
	printf ("\nVocê é portador de deficiencia (PCD)? (S/N) ");
	scanf ("%s", pcd);
	
	if (strcmp(pcd, "S")==0||strcmp(pcd,"s")==0)
		pfinal= custof*(1+0.28);
	else
		pfinal= custof*(1+0.28+0.45);
	
	printf ("\nO preço final do veículo é de R$ %.2f.\n", pfinal);
	
	system ("PAUSE");
	return 0;
}
