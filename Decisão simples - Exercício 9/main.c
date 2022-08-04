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
	printf ("Você já atingiu maioridade. Sua idade é %d\n", idade);
	else 
    printf ("Sua idade é de %d, você ainda não atingiu maioridade\n", idade);
    
	system("PAUSE");
	return 0;
}
