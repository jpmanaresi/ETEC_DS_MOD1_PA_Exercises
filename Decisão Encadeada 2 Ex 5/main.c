#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite o valor de A: \n");
	scanf ("%f", &a);
	printf("Digite o valor de B: \n");
	scanf ("%f", &b);
	printf("Digite o valor de C: \n");
	scanf ("%f", &c);
	
	if (a<b)
	{
		if (b<=c)
		printf ("Ordem Crescente: A: %.2f, B: %.2f, C: %.2f.\n", a, b, c);
		
		else
		printf ("Ordem Crescente: A: %.2f, C: %.2f, B: %.2f.\n", a, c, b);
	}
	else
	{
		if (b<a&&b<c)
		{
		if (a<=c)
		printf ("Ordem Crescente: B: %.2f, A: %.2f, C: %.2f.\n", b, a, c);
		
		else
		printf ("Ordem Crescente: B: %.2f, C: %.2f, A: %.2f.\n", b, c, a);
		}
		else 
		{
			if (c<a)
			{
				if (a<=b)
				printf ("Ordem Crescente: C: %.2f, A: %.2f, B: %.2f.\n", c, a, b);
		
				else
				printf ("Ordem Crescente: C: %.2f, B: %.2f, A: %.2f.\n", c, b, a);	
			}	
		}
	}
	system("PAUSE");
	return 0;
	
}

