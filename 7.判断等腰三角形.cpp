//7.判断等腰三角形
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please enter a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==b||a==c||b==c)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}