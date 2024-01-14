//22.百钱买百鸡
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<20;i++)
	{
		for(j=1;j<33;j++)
		{
			k=100-i-j;
			if(i*5+j*3+k*1/3.0==100)
				printf("i=%d  ,  j=%d  ,  k=%d\n",i,j,k);
		}
	}
	return 0;
}