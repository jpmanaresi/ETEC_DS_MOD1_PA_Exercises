#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float hora;
	
	printf("Digite aqui o horário de início do seu trabalho: \n");
	scanf ("%f", &hora);
	
	if (hora>=0&&hora<5)
	printf ("Você trabalha no período da Noite \n");
	
	else
	{
        if (hora>=5&&hora<13)
        printf ("Você trabalha no período da manhã \n");
                 
        else 
        {
            if (hora>=13&&hora<21)
            printf ("Você trabalha no período da Tarde \n");
                      
            else 
            {
                 if (hora>=21&&hora<=24)
                 printf ("Você trabalha no período da Noite \n");
                           
                 else
                 printf ("Favor digitar um valor válido \n");
            }
        }                 
 }   
    
	system("PAUSE");
	return 0;
}
