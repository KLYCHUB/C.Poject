#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int i,j,en,boy;
	
	printf("Lutfen boy ve en degerlerini giriniz: ");
	scanf("%d %d",&en,&boy);
	
	for(i=1;i<=boy;i++)
	{
		
		for(j=1;j<=en;j++)
		{
			printf("*");
		}
		
		printf("\n");
		
	}
	
	return 0;
	
}
