//27.完数
#include<stdio.h>
int main()
{
	int x,i,sum=0;
	printf("Please input a number:\n");
	scanf("%d",&x);
	for(i=1;i<x;i++)
	{
		if(x%i==0)
			sum+=i;
	}
	if(sum==x)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}