#include <stdio.h>
#include <stdlib.h>

int main()
{

  int sayi,a,b,c;
	
	yeniden:
	
	printf("Lutfen 3 basamakli bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi>=100 && sayi<=999)
	{
		
		a=sayi/100;
		b=(sayi/10)%10;
		c=sayi%10;
		
		printf("Rakamlari toplami: %d",a+b+c);
		
	}
	
	goto yeniden;
  
	return 0;
}
