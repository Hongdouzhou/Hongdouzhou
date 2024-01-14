//26.1~100所有素数的和
#include<stdio.h>
int main()
{
	int m,i,sum=0;
	for(m=2;m<=100;m++)
	{
		for(i=2;i<m;i++)
		{
			if(m%i==0)
				break;
		}
		if(m==i)
			sum+=m;
	}
	printf("sum:%d\n",sum);
	return 0;
}