#include <stdio.h>
#include <stdlib.h>

int main()
{

int i, j, satir;

printf("Lutfen satir sayisini giriniz: ");
scanf_s("%d", &satir);

for (i = satir; i >= 0; i--)
{

for (j = 0; j <= i; j++)
{

printf("*");

}


printf("\n");

}

system("pause");
return 0;

}
