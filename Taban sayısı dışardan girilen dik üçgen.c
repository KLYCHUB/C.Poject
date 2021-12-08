#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,taban;

	printf("lutfen taban sayisini giriniz: ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
	return 0;
}
