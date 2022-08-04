#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float qtdmac, vtot;
	
	printf ("\n Quantas maçãs você deseja comprar? ");
	scanf ("%f", &qtdmac);
	
	if (qtdmac >= 12)
		vtot =qtdmac*0.25;
	else 
		vtot =qtdmac*0.30;
	
	printf ("\nO total deu R$ %.2f.\n", vtot);
	
	system ("PAUSE");
	return 0;
}
