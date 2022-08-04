#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 float vrh, hrt, vrb, vrl;
 unsigned short int ndep;
 
 printf ("\nDigite o valor da Hora : ");
 scanf ("%f", &vrh); 
 
 printf ("\nDigite a quantidade de horas trabalhadas : ");
 scanf ("%f", &hrt);
 
 vrb = vrh*hrt;
 
 printf ("\nSeu salario bruto e de : R$ %f \n", vrb);
 printf ("\nDigite o numero de dependentes : ");
 scanf ("%d", &ndep);
 
 vrl = vrb+(ndep*300);
 
 printf ("\n Seu salario total e : R$ %f \n", vrl);
 
  system("PAUSE");	
  return 0;
}
