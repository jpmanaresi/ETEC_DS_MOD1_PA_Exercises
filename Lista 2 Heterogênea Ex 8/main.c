#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int tipoprod;
	printf("Digite aqui o c�digo do produto: \n");
	scanf ("%d", &tipoprod);
	
	if (tipoprod==1)
		printf ("Produto do tipo 'Alimento n�o perec�vel'.\n");
		
	else
	{
		if (tipoprod>=2&&tipoprod<=4)
			printf ("Produto do tipo 'Alimento perec�vel'.\n");
			
		else
		{
			if (tipoprod>=5&&tipoprod<=6)
				printf ("Produto do tipo 'Vestu�rio'.\n");
				
			else
			{
				if (tipoprod=7)
					printf ("Produto do tipo 'Higiene pessoal'.\n");
				
				else 
				{
					if (tipoprod>=8&&tipoprod<=15)
						printf ("Produto do tipo 'Limpeza e utens�lios dom�sticos'.\n");
						
					else
						printf ("C�digo Inv�lido.\n");
				}
			}
		}
	}
	system("PAUSE");
	return 0;
}
