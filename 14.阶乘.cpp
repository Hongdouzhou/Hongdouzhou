//14.阶乘
#include<stdio.h>
int main()
{
	int i,sum=1;
	for(i=1;i<=10;i++)
		sum*=i;
	printf("sum:%d\n",sum);
	return 0;
}