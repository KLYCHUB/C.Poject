#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int dizi[2][2]; //2x2 lik dama tahtasi dusun - bunlara stun sayilari ver - programlamada islem 0 dan baslayrak sayar 0-1 e 0-1 satir ve sutun...
	
	
	dizi [0][0] = 10;
	dizi [0][1] = 20;
	dizi [1][0] = 30;
	dizi [1][1] = 40;
	
	printf("Matrisin 0-0 da bulunan elemani: %d\n",dizi[0][0]);
	printf("Matrisin 0-1 da bulunan elemani: %d\n",dizi[0][1]);
	printf("Matrisin 1-0 da bulunan elemani: %d\n",dizi[1][0]);
	printf("Matrisin 1-1 da bulunan elemani: %d\n",dizi[1][1]);
	
	printf("\nBu Mantikta:\n\n");
	
	printf("  %d\t %d\n  %d\t %d\n",dizi[0][0],dizi[0][1],dizi[1][0],dizi[1][1]);
	
	
	return 0;
}
