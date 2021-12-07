#include <stdio.h>
#include <stdlib.h>

int main()
{
	
    int i,j,uzunluk;
    
	printf("Taban uzunlugu: ");
	scanf("%d",&uzunluk);
	printf("\n");
	
	for(i=1;i<=uzunluk;i++)
	{
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}
	
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		
	}   
	
	return 0;
	
}
