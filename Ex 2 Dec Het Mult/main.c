#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C;
	printf ("Digite o valor de A: \n");
	scanf ("%f", &A);
	
	printf ("Digite o valor de B: \n");
	scanf ("%f", &B);
	
	printf ("Digite o valor de C: \n");
	scanf ("%f", &C);
	
	if (A>(B+C)||B>(C+A)||C>(B+A))
	
				printf ("N�o � um tri�ngulo.\n");
				
				else 
				{
					if (A==B&&A==C)
					printf ("Se trata de um tri�ngulo equil�tero.\n");
					
					else
					{
						if (A==B||A==C)
						printf ("Se trata de um tri�ngulo is�sceles.\n");
						
						else 
						printf ("Se trata de um tri�ngulo escaleno.\n");
					}
				}
	system("PAUSE");
	
	return 0;
}

