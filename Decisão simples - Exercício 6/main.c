#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
    float n1,n2;
    
    printf ("\nDigite o 1° valor: ");
    scanf ("%f", &n1);
    printf ("\nDigite o 2° valor: ");
    scanf ("%f", &n2);
    
    if (n1>n2)
    printf ("o maior valor é %.2f\n",n1);
    else
    printf ("o maior valor é %.2f\n",n2);
    
    system ("cls");
    
	system("PAUSE");
	return 0;
}
