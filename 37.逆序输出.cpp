//37.逆序输出
#include<stdio.h>
int main()
{
	int a[10],i;
	printf("Please enter 10 numbers:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(i=9;i>=0;i--)
		printf("%d ",a[i]);
	return 0;
}