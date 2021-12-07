#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int dizi[100];
	int i, sayi;
	
    printf("Eleman sayisi: ");
    scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d. degerini giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<sayi;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	system("pause");
	return 0;
}
