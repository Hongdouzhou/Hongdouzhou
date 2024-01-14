//39.数组的查找（折半）
#include<stdio.h>
int main()
{
	int a[10],i,x,low=0,high=9,mid;
	printf("Please enter 10 numbers:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	printf("Please input a number which you want to search:\n");
	scanf("%d",&x);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x<a[mid])
			high=mid-1;
		else if(x>a[mid])
			low=mid+1;
		else
			break;
	}
	printf("%d lies in %d\n",x,mid+1);
	return 0;
}