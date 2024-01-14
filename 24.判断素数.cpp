//24.判断素数
#include<stdio.h>
int main()
{
	int m,i;
	printf("Please input a number:\n");
	scanf("%d",&m);
	for(i=2;i<m;i++)
	{
		if(m%i==0)
			break;
	}
	if(m==i)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}