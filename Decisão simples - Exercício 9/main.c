#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int anonasc, idade;
	printf("Digite seu ano de nascimento: ");
	scanf ("%d", &anonasc);
	
	idade = 2022-anonasc;
	
	if (idade >= 18)
	printf ("Voc� j� atingiu maioridade. Sua idade � %d\n", idade);
	else 
    printf ("Sua idade � de %d, voc� ainda n�o atingiu maioridade\n", idade);
    
	system("PAUSE");
	return 0;
}
