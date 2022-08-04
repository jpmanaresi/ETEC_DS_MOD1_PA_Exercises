#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char sexo[1];
	
	printf ("Qual seu sexo? (F/M)");
	scanf ("%s", &sexo);
	
	printf ("%s", sexo);
	
	if ((strcmp(sexo,"M")==0)||strcmp(sexo,"m")==0)
			printf ("\nSeja bem vindo, senhor!");
			

	else 
	{
	
		if ((strcmp(sexo,"F")==0)||strcmp(sexo,"f")==0)
			printf ("\nSeja bem vinda, senhora!");
				
			else 
			printf ("\nERRO. Digite um valor válido.");
		}
	system ("PAUSE");
		
	return 0;
}
