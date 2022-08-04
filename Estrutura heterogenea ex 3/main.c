#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int dia1, mes1, ano1, dia2, mes2, ano2, data1, data2;
	printf("Favor informar a primeira data:\n Dia:\n");
	scanf ("%d", &dia1);
	printf ("Mês: \n");
	scanf ("%d", &mes1);
	printf ("Ano: \n");
	scanf ("%d", &ano1);
	
	printf("Favor informar a segunda data:\n Dia:\n");
	scanf ("%d", &dia2);
	printf ("Mês: \n");
	scanf ("%d", &mes2);
	printf ("Ano: \n");
	scanf ("%d", &ano2);
	
	data1= dia1+mes1+ano1;
	data2= dia2+mes2+ano2;
	
	if (data1<data2)
	
	printf ("A data %d/%d/%d é mais antiga que a data %d/%d/%d.\n", dia1, mes1, ano1, dia2, mes2, ano2);
	
	else 
	{
		if (data2<data1)
		printf ("A data %d/%d/%d é mais antiga que a data %d/%d/%d.\n", dia2, mes2, ano2, dia1, mes1, ano1);
		
		else 
		printf ("As datas %d/%d/%d e %d/%d/%d são iguais.\n", dia1, mes1, ano1, dia2, mes2, ano2);
	}
	system("PAUSE");
	return 0;
}

