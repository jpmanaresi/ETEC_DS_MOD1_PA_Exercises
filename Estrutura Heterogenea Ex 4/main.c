#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, media;
	
	printf ("Bem vindo! Digite suas notas\n1�Bimestre: \n");
	scanf ("%f", &n1);
	printf ("2�Bimestre: \n");
	scanf ("%f", &n2);
	printf ("3�Bimestre: \n");
	scanf ("%f", &n3);
	printf ("4�Bimestre: \n");
	scanf ("%f", &n4);
	
	media= (n1+n2+n3+n4)/4;
	
	if (media >=2.5&&media<5)
	printf ("\nVoc� foi reprovado com m�dia D. Seu burro.\n");
	else 
	{
		if (media >=5&&media<7)
		printf ("\nVoc� foi aprovado com m�dia C. D� pra melhorar em?\n");
		
		else
		{
			if (media>=7&&media<9)
			printf ("\nVoc� foi aprovado com m�dia B. T� muito bom j�!\n");
			
			else 
			{
				if (media>=9&&media<=10)
				printf ("\nVoc� foi aprovado com m�dia A. Parab�ns!\n");
				
				else
					{
						if (media<2.5)
						printf ("\nVoc� � burro pra caralho. Foi reprovado com E, caba�o.\n");
						
						else
						
						{
						printf ("\nTu errou at� na hora de digitar a nota seu fodido?\n");
						}
				}
			}
		}
	}
	system ("PAUSE");
}

