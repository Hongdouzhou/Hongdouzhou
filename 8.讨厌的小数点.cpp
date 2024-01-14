//8.讨厌的小数点
#include<stdio.h>
#include<math.h>
int main()
{
	int t,n[30],i,s;
	float a[30];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%f",&a[i]);
		scanf("%d",&n[i]);
	}
	for(i=0;i<t;i++)
	{
		s=(int)(a[i]*pow(10,n[i]));
		printf("%d\n",s%10);
	}
	return 0;
}