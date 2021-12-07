#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, satir, sutun;

	printf("Satir ve sutun sayisini giriniz: ");
	scanf_s("%d %d", &satir, &sutun);

	for (i = 1; i <= satir; i++)
	{

		for (j = 1; j <= sutun; j++)
		{
			printf("%dx%d=%d\t", i, j, i * j);
		}
		printf("\n");

	}

	system("pause");
	return 0;
}
