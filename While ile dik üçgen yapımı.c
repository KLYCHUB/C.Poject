#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i, j, k;
	i = 0;
	

	while (i < 25)
	{
		j = 0;

		while (j < i+1)
		{
			printf("*");
			j++;
		}
		
		printf("\n");
		i++;
	}

	system("pause");
	return 0;
}
