//31.最小公倍数（穷举法）
#include<stdio.h>
int main()
{
	int i,a,b,t;
	printf("Please input a,b:\n");
	scanf("%d%d",&a,&b);
	t=a>b?a:b;
	for(i=t;i<=(a*b);i++)
	{
		if(i%a==0&&i%b==0)
			break;
	}
	printf("%d",i);
	return 0;
}