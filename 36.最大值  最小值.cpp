//36.最大值  最小值
#include<stdio.h>
int main()
{
	int a[10],i,max,min;
	printf("Please enter 10 numbers:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	max=min=a[0];
	for(i=1;i<=9;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	printf("max:%d\nmin:%d\n",max,min);
	return 0;
}