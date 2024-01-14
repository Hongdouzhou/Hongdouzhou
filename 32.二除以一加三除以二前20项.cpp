//32. 2/1+3/2+5/3+8/5+13/8+...+前20项
#include<stdio.h>
int main()
{
	int i;
	double a=2,b=1,t,sum=0;
	for(i=1;i<=20;i++)
	{
		sum+=a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("sum:%.2lf\n",sum);
	return 0;
}