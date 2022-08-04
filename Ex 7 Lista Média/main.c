#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  short int anonas, id2022, id2050;
  
  printf ("\nDigite seu ano de nascimento: ");
  scanf ("%d", &anonas);
 
 id2022 = (2022-anonas);
 id2050 = (2050-anonas);
 
 printf ("\nSua idade atual e de %d", id2022, " anos");  printf (" anos.");
 printf ("\nVoce vai estar com %d", id2050);  printf (" anos em 2050.\n");
  system("PAUSE");	
  return 0;
}
