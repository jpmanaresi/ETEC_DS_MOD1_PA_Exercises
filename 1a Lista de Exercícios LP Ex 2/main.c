#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, p1, n2, p2, n3, p3, media;
	
	printf ("\nDigite a 1a nota: ");
	scanf ("%f", &n1);
	printf ("\nDigite o peso da 1a nota: ");
	scanf ("%f", &p1);
	printf ("\nDigite a 2a nota: ");
	scanf ("%f", &n2);
	printf ("\nDigite o peso da 2a nota: ");
	scanf ("%f", &p2);
	printf ("\nDigite a 3a nota: ");
	scanf ("%f", &n3);
	printf ("\nDigite o peso da 3a nota: ");
	scanf ("%f", &p3);
	
	media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
	
	system("cls");
	
	printf ("\nSua media ponderada e de %f.", media);
	
	system("PAUSE");
	
	return 0;
}
