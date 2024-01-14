//41.冒泡排序
#include<stdio.h>
int main()
{
	int a[10],i,j,t;
	printf("Please enter 10 numbers:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
	printf("The sorted numbers are:\n");
	for(i=0;i<=9;i++)
		printf("%d ",a[i]);
	return 0;
}