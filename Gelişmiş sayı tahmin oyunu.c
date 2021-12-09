#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int sayi, tahmin, sayac = 1, fark;

	srand(time(NULL));
	sayi = rand() % 100 + 1;

	printf("Aklindan 1 ile 100 arasi bir sayi tuttum bakalim 5 denemede bulabilecek misin?\n------------------------------------------------------------------------------\n");
	
	while (1)
	{
		
		printf("%d.Tahmininiz: ", sayac);
		scanf_s("%d", &tahmin);


		sayac++;

		if (sayi <= tahmin)
		{
			fark = tahmin - sayi;
		}
		else
		{
			fark = sayi - tahmin;
		}
		if (sayi == tahmin)
		{
			printf("---------------------------\nTebrikler dogru bildiniz...\n---------------------------\n");
			break;
		}
		else if (fark > 5 && fark <= 10)
		{
			printf("Yaklastiniz\n----------------\n");
		}
		else if (fark > 10 && fark <= 30)
		{
			printf("Uzaksiniz\n----------------\n");
		}
		else if (fark <= 5)
		{
			printf("Cok yaklastiniz\n----------------\n");
		}
		else
		{
			printf("Cooook uzaksiniz\n----------------\n");
		}
		if (sayac == 5)
		{
			printf("Malesef hakkiniz doldu, tuttugum sayi %d'idi...\n-----------------------------------------------\n", sayi);
			break;
		}

	}



	return 0;
}
