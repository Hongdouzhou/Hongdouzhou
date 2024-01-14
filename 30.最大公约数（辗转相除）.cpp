//30.最大公约数（辗转相除）
#include<stdio.h>
int main()
{
	int a,b,r;
	printf("Please input a,b:\n");
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("%d",a);
	return 0;
}