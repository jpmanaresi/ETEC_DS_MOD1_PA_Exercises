#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, r1, r2; 
	
	printf ("\n Digite o primeiro numero: ");
	scanf ("%f", &a);
	printf ("\nDigite o segundo numero: ");
	scanf ("%f", &b);
	
	system ("cls");
	r1 = pow(a,b);
	r2 = pow(b,a);
	
	printf ("\nO resultado da primeira potenciacao e de %.2f e o da segunda e de %.2f\n", r1, r2);
	
	system("PAUSE");
	
	return 0;
}
