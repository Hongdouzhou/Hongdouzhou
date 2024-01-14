//38.数组的查找（顺序）
#include<stdio.h>
int main()
{
	int a[10],i,x;
	printf("Please enter 10 numbers:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	printf("Please input a number which you want to search:\n");
	scanf("%d",&x);
	for(i=0;i<=9;i++)
	{
		if(x==a[i])
			break;
	}
	printf("%d lies in %d\n",x,i+1);
	return 0;
}