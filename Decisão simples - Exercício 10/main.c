#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float qtdp, multa; 
	printf("Digite a quantidade de peixes (kg): \n");
	scanf ("%f", &qtdp);
	if (qtdp<=50) 
	printf ("\n A quantidade de peixes est� dentro do limite. Boa viagem!\n");
	
	else 
    {
         multa = (qtdp-50)*4;
         printf ("\n Voc� ultrapassou o limite. Sua multa � de R$ %.2f.\n", multa);
         }
    
	system("PAUSE");
	return 0;
}
