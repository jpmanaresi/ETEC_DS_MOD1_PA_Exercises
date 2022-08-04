#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

float vlseg, vlmin, vlhr;

printf ("\nDigite aqui o valor em segundos: ");
scanf ("%f", &vlseg);

vlmin = vlseg/60;
vlhr = vlseg/360;

printf ("\nO valor corresponde a %.2f em horas e %.2f em minutos.", vlhr, vlseg);

system ("PAUSE");
	
	return 0;
}
