#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float poupanca; 
     poupanca = 500*pow((1+0.01),3);
     printf("\nSeu saldo e: %f \n", poupanca);
     system("PAUSE");	
     return 0;
}
