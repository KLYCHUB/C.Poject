#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int i,a,b,c,sayac;
	sayac = 0;
	
	for(i=100;i<1000;i++)
	{
		
		a = i/100;
		b = (i/10)%10;
		c = i%10;
		
		if(a!=b && a!=c && b!=c)
		{
			sayac++;
		}
		
	}

	printf("Rakamlari birbirinden farkli %d tane sayi vardir...",sayac);
	
	return 0;
}
