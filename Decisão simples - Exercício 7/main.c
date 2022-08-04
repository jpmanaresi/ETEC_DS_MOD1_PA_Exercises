#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, dif;
	printf ("\nDigite o 1° valor: ");
	scanf ("%d", &n1);
	printf ("\nDigite o 2° valor: ");
	scanf ("%d", &n2);
	
	if (n1>n2)
	dif=n1-n2;
	else
	dif=n2-n1;
	
	printf ("\nA diferença entre os dois números é de %d\n", dif);
	system("PAUSE");
	return 0;
}
