//12.求a,b,c当中的最大值
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Please input a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		max=a;
	if(max<c)
		max=c;
	printf("max:%d\n",max);
	return 0;
}

