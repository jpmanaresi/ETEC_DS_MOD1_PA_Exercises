#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, dif;
	printf ("\nDigite o 1� valor: ");
	scanf ("%d", &n1);
	printf ("\nDigite o 2� valor: ");
	scanf ("%d", &n2);
	
	if (n1>n2)
	dif=n1-n2;
	else
	dif=n2-n1;
	
	printf ("\nA diferen�a entre os dois n�meros � de %d\n", dif);
	system("PAUSE");
	return 0;
}
