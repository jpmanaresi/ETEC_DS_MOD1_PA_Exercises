#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float hora;
	
	printf("Digite aqui o hor�rio de in�cio do seu trabalho: \n");
	scanf ("%f", &hora);
	
	if (hora>=0&&hora<5)
	printf ("Voc� trabalha no per�odo da Noite \n");
	
	else
	{
        if (hora>=5&&hora<13)
        printf ("Voc� trabalha no per�odo da manh� \n");
                 
        else 
        {
            if (hora>=13&&hora<21)
            printf ("Voc� trabalha no per�odo da Tarde \n");
                      
            else 
            {
                 if (hora>=21&&hora<=24)
                 printf ("Voc� trabalha no per�odo da Noite \n");
                           
                 else
                 printf ("Favor digitar um valor v�lido \n");
            }
        }                 
 }   
    
	system("PAUSE");
	return 0;
}
