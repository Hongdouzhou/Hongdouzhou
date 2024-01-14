//判断10个整数之积末尾有多少个连续的零
#include<stdio.h>
int main()
{
	int a[10],i,s2=0,s5=0;
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=9;i++)
	{
		while(a[i]%2==0)
		{
			s2++;
			a[i]/=2;
		}
		while(a[i]%5==0)
		{
			s5++;
			a[i]/=5;
		}
	}
	printf("%d",s2>s5?s5:s2);
	return 0;
}