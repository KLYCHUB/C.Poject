#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i, j;

	for (i=1; i<5; i++)
	{
		i++;

		for (j=1; j<i; j++)
		{
			printf("*");
			j++;
		}

		printf("\n");

	}

	system("pause");
	return 0;
}
