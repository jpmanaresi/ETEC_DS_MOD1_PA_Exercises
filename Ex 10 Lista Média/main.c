#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 char nomealuno[50];
 float n1, n2, n3, n4, media;
 
  printf ("\nDigite o nome do aluno:\n");
  gets (nomealuno);
  
  system("CLS");
  printf ("\nDigite as 4 notas do aluno : ");
  scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);
  
  media = (n1+n2+n3+n4)/4;
  
  printf ("\nA media final do aluno %s", nomealuno);
  printf (" foi: %f\n", media);
  
  system("PAUSE");	
  return 0;
}
