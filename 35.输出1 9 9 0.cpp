//35.输出1 9 9 0
#include<stdio.h>
int main()
{
	int x=1990,k,l=0,i,n=1,t,s=0;
	k=x;
	while(k!=0)
	{
		k/=10;
		l++;
	}
	for(i=1;i<=l-1;i++)
		n*=10;
	while(n!=0)
	{
		t=x/n%10;
		printf("%d ",t);
		n/=10;
	}
	return 0;
}