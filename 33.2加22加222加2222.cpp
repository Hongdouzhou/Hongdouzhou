//33.2+22+222+2222		a,n
#include<stdio.h>
int main()
{
	int a,n,t=0,i,sum=0;
	printf("Please input a,n:\n");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		t=10*t+a;
		sum+=t;
	}
	printf("sum:%d\n",sum);
	return 0;
}