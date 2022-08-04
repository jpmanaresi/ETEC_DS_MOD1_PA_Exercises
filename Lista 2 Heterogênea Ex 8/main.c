#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int tipoprod;
	printf("Digite aqui o código do produto: \n");
	scanf ("%d", &tipoprod);
	
	if (tipoprod==1)
		printf ("Produto do tipo 'Alimento não perecível'.\n");
		
	else
	{
		if (tipoprod>=2&&tipoprod<=4)
			printf ("Produto do tipo 'Alimento perecível'.\n");
			
		else
		{
			if (tipoprod>=5&&tipoprod<=6)
				printf ("Produto do tipo 'Vestuário'.\n");
				
			else
			{
				if (tipoprod=7)
					printf ("Produto do tipo 'Higiene pessoal'.\n");
				
				else 
				{
					if (tipoprod>=8&&tipoprod<=15)
						printf ("Produto do tipo 'Limpeza e utensílios domésticos'.\n");
						
					else
						printf ("Código Inválido.\n");
				}
			}
		}
	}
	system("PAUSE");
	return 0;
}
