#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, k;
	i = 0;
	k =	0;

	printf("Lutfen bir sayi giriniz: ");
	scanf_s("%d", &n);

	while (i < n)
	{
		i++;
		k = i + k;
	}

	printf("%d ", k);

	system("pause");
	return 0;
}
