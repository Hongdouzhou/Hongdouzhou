//43.在升序数组中插入数字
#include<stdio.h>
int main()
{
	int a[10]={-1,2,5,9,13,17,23,25,45};
	int i,x;
	printf("Please input a number:\n");
	scanf("%d",&x);
	for(i=8;i>=0;i--)
	{
		if(a[i]>x)
			a[i+1]=a[i];
		else
			break;
	}
	a[i+1]=x;
	printf("The altered array is:\n");
	for(i=0;i<=9;i++)
		printf("%d ",a[i]);
	return 0;
}