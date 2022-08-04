#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float na, nb, nc, delta, x1, x2;
	
	printf ("\nDigite o valor de A :");
	scanf ("%f", &na);
	printf ("\nDigite o valor de B :");
	scanf ("%f", &nb);
	printf ("\nDigite o valor de C :");
	scanf ("%f", &nc);
	
	delta = pow(nb,2)-4*na*nc;
	
		if (delta >=0) 
		{
		x1=(-nb+sqrt(delta))/(2*na);
		x2=(-nb-sqrt(delta))/(2*na);
		
		printf("\nOs resultados da equacao sao x1=%.2f, x2=%.2f.\n", x1, x2);
		}
		else 
		printf ("\nO valor da equacao nao existe\n.");
		
	system ("PAUSE");
		
	return 0;
}
