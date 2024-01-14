//23.回文数
#include<stdio.h>
int main()
{
	int n,m,t=0,k;
	printf("Please input a number:\n");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		m=n%10;
		t=10*t+m;
		n/=10;
	}
	if(k==t)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}