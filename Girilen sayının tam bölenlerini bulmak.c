#include <stdio.h>
#include <stdlib.h>

int main()
{
  
 int i,sayi;
	
	printf("Lutfen bir sayii giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		
		sayi%i==0;
		
		if(sayi%i==0)
		{
		   printf("%d sayisi %d ye tam bolunur...\n",sayi,i);
		}
		
	}
  
  
  return 0;
  
}
