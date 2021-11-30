#include <stdio.h>
#include <stdlib.h>

int main()
{
   
	int secim, sayi1, sayi2;

	printf("Lutfen islem yapmak istediginiz iki sayiyi sirasi ile giriniz: ");
	scanf_s("%d %d", &sayi1, &sayi2);

	printf("Lutfen islem secin:\n1.Toplama\n2.Cikarma\n3.carpma\n4.Bolme\nisleminiz: ");
	scanf_s("%d", &secim);

	if(secim == 1 || secim == 2 || secim == 3 || secim == 4)
	{

		switch (secim)
		{
		case 1: printf("Toplamlari: %d\n",sayi1 + sayi2); break;
		case 2: printf("Farklari: %d\n",sayi1 - sayi2); break;
		case 3: printf("Carpimlari: %d\n",sayi1 * sayi2); break;
		case 4: printf("Bolumlari: %.2f\n", (float)sayi1 / (float)sayi2);  break;

		default: break;
		}

		printf("isleminiz bitti, cikmak icin herhangi bir tusa basiniz...\n");
		
	}
	else
	{

		while (secim != 1 && secim != 2 && secim != 3 && secim != 4)
		{

			printf("Lutfen islem secin:\n1.Toplama\n2.Cikarma\n3.carpma\n4.Bolme\nisleminiz: ");
			scanf_s("%d", &secim);

			switch (secim)
			{
			case 1: printf("Toplamlari: %d\n", sayi1 + sayi2); break;
			case 2: printf("Farklari: %d\n", sayi1 - sayi2); break;
			case 3: printf("Carpimlari: %d\n", sayi1 * sayi2); break;
			case 4: printf("Bolumlari: %.2f\n", (float)sayi1 / (float)sayi2);  break;

			default: break;
			}

		}

		printf("isleminiz bitti, cikmak icin herhangi bir tusa basiniz...\n");

	}

	system("pause");
	return 0;
}
