//16.统计正负数的个数
#include<stdio.h>
#define N 10
int main()
{
	int i,x,p=0,n=0;
	for(i=0;i<=N-1;i++)
	{
		scanf("%d",&x);
		if(x>0)
			p++;
		if(x<0)
			n++;
	}
	printf("Positive:%d\n",p);
	printf("Negative:%d\n",n);
	return 0;
}