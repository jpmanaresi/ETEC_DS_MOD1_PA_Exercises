#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float raio, altura, area;

printf ("\nDigite o raio da base da lata (cm): ");
scanf ("%f", &raio);
printf ("\nDigite a altura da lata: (cm)");
scanf ("%f", &altura);	

area = 2*3.14*pow(raio,2)+(2*3.14*altura);

printf ("\nA area da superfice da lata e de %.2f centimetros quadrados\n", area);
system ("PAUSE");
	return 0;
}
