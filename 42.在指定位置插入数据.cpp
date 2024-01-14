//42.在指定位置插入数据
#include<stdio.h>
int main()
{
	int a[10]={-1,5,2,7,6,9,3,12,45},i,p,x;
	printf("Please input a position and a number:\n");
	scanf("%d%d",&p,&x);
	for(i=9;i>p;i--)
		a[i]=a[i-1];
	a[p]=x;
	printf("The altered array is:\n");
	for(i=0;i<=9;i++)
		printf("%d ",a[i]);
	return 0;
}