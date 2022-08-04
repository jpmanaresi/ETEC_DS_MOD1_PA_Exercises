#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  
  int num;
  
  printf ("\nDigite seu numero aqui: ");
  scanf ("%d", &num);
  if (num%2==0)
  printf("\nO numero é par\n");
  else
  printf ("\nO numero é ímpar\n");
  
  system("PAUSE");	
  return 0;
}
