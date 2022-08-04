#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 float bast, alt, areat;
 
 printf ("\nDigite a base do triangulo (m): ");
 scanf ("%f", &bast); 
 printf ("\nDigite a altura do triangulo (m): ");
 scanf ("%f", &alt);
 
 areat = (bast*alt)/2;
 
 printf ("\nA area do triangulo e de %f", areat); printf (" metros cubicos\n");
  system("PAUSE");	
  return 0;
}
