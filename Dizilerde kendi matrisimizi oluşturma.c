#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int satir, sutun, i, j, k, l;
	
	printf("Lutfen satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	printf("Lutfen sutun sayisini giriniz: ");
	scanf("%d",&sutun);
	
	printf("\n");
	
	int matris[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("[%d][%d] ----> ",i,j);
			scanf("%d",&matris[i][j]);
		}
	}
	
	printf("\n------ Tablo Hali ------\n\n");
	
	for(k=0;k<satir;k++)
	{
		for(l=0;l<sutun;l++)
		{
			printf("%d ",matris[k][l]);
		}
		
		printf("\n");
	}
	
	
	return 0;
}
