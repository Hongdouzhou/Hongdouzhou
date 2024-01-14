//25.第十二个素数
#include<stdio.h>
int main()
{
	int m,i,n=0;
	for(m=2;;m++)
	{
		for(i=2;i<m;i++)
		{
			if(m%i==0)
				break;
		}
		if(m==i)
			n++;
		if(n==12)
			break;
	}
	printf("The 12th:%d\n",m);
	return 0;
}