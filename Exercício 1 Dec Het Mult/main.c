#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf ("Bem vindo ao clube de nata��o! Digite sua idade: \n");
	scanf ("%d", &idade);
	
	if (idade >=5&&idade<=7)
	printf ("\nA categoria adequada para voc� � Infantil A\n");
	else 
	{
		if (idade >=8&&idade<=10)
		printf ("\nA categoria adequada para voc� � Infantil B\n");
		
		else
		{
			if (idade >=11&&idade<13)
			printf ("\nA categoria adequada para voc� � Juvenil A\n");
			
			else 
			{
				if (idade >=14&&idade<17)
				printf ("\nA categoria adequada para voc� � Juvenil B\n");
				
				else
				
					{
						if (idade >=18)
						printf ("\nA categoria adequada para voc� � S�nior\n");
						
						else
						printf ("\nVoc� n�o se qualifica para nenhuma categoria. Desculpe!\n");
					}	
			}
		}
	}
	system ("PAUSE");
}
