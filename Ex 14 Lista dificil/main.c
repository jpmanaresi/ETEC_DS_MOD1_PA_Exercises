#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio, area;
	
	printf ("Digite o raio do circulo: (cm)");
	scanf ("%f", &raio);
	
	area = 3.14*pow(raio,2);
	
	printf ("A area do circulo e de %.2f centimetros quadrados.", area);
	return 0;
}
