#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, media;
	
	printf ("\n Digite a segunda nota : ");
	scanf ("%f", &n1);
	printf ("\n Digite a primeira nota : ");
	scanf ("%f", &n2);
	printf ("\n Digite a terceira nota : ");
	scanf ("%f", &n3);
	printf ("\n Digite a quarta nota : ");
	scanf ("%f", &n4);
	
	media = (n1+n2+n3+n4)/4;
	printf ("\n A media e : %f", media);
	system("PAUSE");
	return 0;
}
