//11.判断水仙花数
#include<stdio.h>
int main()
{
	int x,a,b,c;
	printf("Please enter a number:\n");
	scanf("%d",&x);
	a=x%10;b=x/10%10;c=x/100;
	if(x==a*a*a+b*b*b+c*c*c)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}