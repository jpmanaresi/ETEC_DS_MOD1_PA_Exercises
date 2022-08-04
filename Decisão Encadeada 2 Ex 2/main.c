#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float altura, peso, imc;
	printf("Digite aqui seu peso (kg): \n");
	scanf ("%f", &peso);
	
	printf("Digite aqui sua altura (m): \n");
	scanf ("%f", &altura);
	
	imc= peso/pow(altura,2);
	
	if (imc<18)
	
	printf ("IMC: %.2f Classificação: Magreza. \n",imc);
	
	else
	{
		if (imc>=18&&imc<25)
		printf ("IMC: %.2f Classificação: Saudável. \n",imc);
		
		else
		{
			if (imc>=25&&imc<30)
			printf ("IMC: %.2f Classificação: Sobrepeso. \n",imc);
			
			else
			printf ("IMC: %.2f Classificação: Obesidade. \n",imc);	
			
		}
	}
	system("PAUSE");
	return 0;
}

