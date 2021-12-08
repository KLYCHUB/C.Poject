#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x, y, i;
	i = 0;
	
    yeniden:
    	
	printf("iki sayi gir: ");
	scanf_s("%d %d", &x, &y);

	if (x != y)
	{

		if (x > y)
		{
			for (y = y + 1; y < x; y++)
			{
				i = i + y;
			}
			printf("Sayilarin toplami: %d", i);
		}
		else if (x < y)
		{
			for (x = x + 1; x < y; x++)
			{
				i = i + x;
			}
			printf("Sayilarin toplami: %d", i);

		}

	}
	else
	{
		goto yeniden;
	}

	return 0;
}
