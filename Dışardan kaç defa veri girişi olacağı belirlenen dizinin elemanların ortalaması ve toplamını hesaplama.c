#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int dizi[100];
	int i,sayi,toplam,ort;
	toplam=0;
	
	printf("Dizinin elaman sayisini girin: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	
	{
		printf("Dizinin %d. degerini girin: ",i+1);
		scanf("%d",&dizi[i]);
		
	}
	
	for (i=0;i<sayi;i++)
	{
		printf("Sayilariniz: %d\n",dizi[i]);
	}
	
	for(i=0;i<sayi;i++)
	{
		toplam=toplam+dizi[i];
		ort=toplam/sayi;
	}
	printf("Toplam: %d\n",toplam);
	printf("Ortalama: %d\n",ort);
	
	system("pause");
	return 0;
}
