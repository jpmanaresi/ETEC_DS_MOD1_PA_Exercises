#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float va, vb, vc, x1, x2;
	
	printf ("/nDigite o valor de A : ");
	scanf ("%f", &va);
	printf ("/nDigite o valor de B : ");
	scanf ("%f", &vb);
	printf ("/nDigite o valor de C : ");
	scanf ("%f", &vc);
	
	x1 = (-vb+sqrt(pow(vb,2)-4*va*vc))/(2*va);
	x2 = (-vb-sqrt(pow(vb,2)-4*va*vc))/(2*va);
	
	printf ("o valor de x1 e de %f e o de x2 e de %f", x1, x2);
	
	return 0;
}
