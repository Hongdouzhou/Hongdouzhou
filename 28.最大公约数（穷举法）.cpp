//28.最大公约数（穷举法）
#include<stdio.h>
int main()
{
	int i,a,b,t;
	printf("Please input a,b:\n");
	scanf("%d%d",&a,&b);
	t=a<b?a:b;
	for(i=t;i>0;i--)
	{
		if(a%i==0&&b%i==0)
			break;
	}
	printf("%d",i);
	return 0;
}