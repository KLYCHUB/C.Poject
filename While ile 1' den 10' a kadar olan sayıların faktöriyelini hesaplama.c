#include <stdlib.h>
#include <stdio.h>

int main()
{

	int fakt = 1, sayi, i = 1;

	printf("1 ile 10 arasinda bir sayi girin : ");
	scanf_s("%d", &sayi);

	if (sayi > 1 && sayi < 10)
	{

		while (i <= sayi)
		{
			fakt *= i;
			i++;
		}
		printf("Faktoriyel = %d\n", fakt);
	}

	else {

		while (sayi < 1 || sayi > 10)
		{
			printf("1 ile 10 arasinda bir sayi girin : \n");
			scanf_s("%d", &sayi);
		}

		while (i <= sayi)
		{
			fakt *= i;
			i++;
		}
		printf("Faktoriyel = %d\n", fakt);

	}

	system("pause");
	return 0;

}
