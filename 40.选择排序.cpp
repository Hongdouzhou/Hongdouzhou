//40.选择排序
#include<stdio.h>
int main()
{
	int a[10],i,j,k,t;
	printf("Please enter 10 numbers:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		k=i;
		for(j=i+1;j<10;j++)
		{
			if(a[k]<a[j])
			{
				k=j;
			}
			t=a[k];a[k]=a[i];a[i]=t;	
		}
	}
	printf("The sorted numbers are:\n");
	for(i=0;i<=9;i++)
		printf("%d ",a[i]);
	return 0;
}