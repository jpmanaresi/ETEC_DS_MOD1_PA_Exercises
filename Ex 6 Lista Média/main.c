#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char *argv[])
{
    
 float baser, alturar, area;
 
 printf ("\nDigite a largura do retangulo (m): ");
 scanf ("%f", &baser);
 
 printf ("\nDigite a altura do retangulo (m): ");
 scanf ("%f", &alturar);
 
 area = (baser*alturar);
 
 printf ("\nA area do retangulo e de %f", area, "m²");
 
  system("PAUSE");	
  return 0;
}
