#include <stdio.h>
#include <stdlib.h>

int main()
{
	int skor[10]={2,1,0,0,2,1,1,2,1,0}; //1 yenilgi, 2 kazanma, 0 beraberlik
	int i,puan=0;
	
	for(i=0;i<10;i++)
	{
		
		if(skor[i]==2)
		{
			puan = puan+3;
		}
		if(skor[i]==0)
		{
			puan = puan+1;
		}
	}
	if(puan>=12)
	{
		printf("%d Puanla kume dusmediniz:",puan);
	}
	else
	{
		printf("%d Puanla kume dustunuz:",puan);
	}
	
	return 0;
}

// 2 galibiyeti, 1 malubiyeti, 0 ise beraberliği belirtir...
