#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float pfabrica, plucro, pimp, vllucro, vlimp, pfinal;
	
	printf ("\nDigite o preco de fabrica do veiculo: R$");
	scanf ("%f", &pfabrica);
	
	printf ("\nDigite o percentual de lucro do distribuidor: ");
	scanf ("%f", &plucro);
	
	printf ("\nDigite o percentual de impostos do veiculo: ");
	scanf ("%f", &pimp);
	
	system ("cls");
	vllucro = pfabrica*(plucro/100);
	vlimp = pfabrica*(pimp/100);
	pfinal = pfabrica+vllucro+vlimp;
	
	printf ("\nO preco final do veiculo e de R$ %.2f, o valor do percentual de lucro e de R$ %.2f e os impostos são R$ %.2f\n", pfinal, vllucro, vlimp);
	
	system ("PAUSE");
	return 0;
}
