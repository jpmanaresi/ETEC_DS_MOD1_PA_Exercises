#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float medcm, meddm, medm, medmm;
	
	printf ("\nDigite o valor da medida em cm : ");
	scanf ("%f", &medcm);
	
	medm = medcm/100;
	meddm = medcm/10;
	medmm = medcm*10;
	
	system ("CLS");
	
	printf ("\nA medida tem %.2f metros, %.2f decimetros e %.2f milimetros.\n", medm, meddm, medmm);
	
	system ("PAUSE");
	return 0;
}
