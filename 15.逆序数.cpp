//15.逆序数
#include<stdio.h>
int main()
{
	int n,m;
	printf("Please input a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		printf("%d",m);
		n/=10;
	}
	return 0;
}