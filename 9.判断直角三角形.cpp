//9.判断直角三角形
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please enter a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}