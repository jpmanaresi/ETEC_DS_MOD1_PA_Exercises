#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system ("color 2B");
	int t1, t2;
	
	printf ("\nQuantos gols fez o primeiro time?");
	scanf ("%d", &t1);
	
	printf ("\nQuantos gols fez o segundo time?");
	scanf ("%d", &t2);
	
	if (t1==t2) 
	{
		system ("color F0");
		printf ("O jogo acabou empatado.\n");
	}
	
	else 
	{
		if (t1>t2)
		{
		
			system ("color 9F");
			printf ("\nVitória do time 1!\n");
		}
		else
		{
			system ("color A0");
			printf ("Vitória do time 2!\n");
		}
	}
	system ("PAUSE");
	return 0;
}
