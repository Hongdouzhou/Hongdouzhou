//19.斐波那契数列（数组）
#include<stdio.h>
int main()
{
	int a[20]={1,1},i;
	for(i=2;i<=19;i++)
		a[i]=a[i-1]+a[i-2];
	for(i=0;i<=19;i++)
	{
		if(i%4==0)
			printf("\n");
		printf("%d	",a[i]);
	}
	return 0;
}
