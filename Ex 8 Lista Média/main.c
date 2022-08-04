#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 float X, N, RES;
 
 printf ("\n Digite o valor de X: ");
 scanf ("%f", &X); 
 
 printf ("\nDigite o valor de N: ");
 scanf ("%f", &N);
 
 system("CLS");
 RES = pow((X*N),2);
 
 printf ("\n O resultado da equacao e de %f\n", RES);
 
  system("PAUSE");	
  return 0;
}
