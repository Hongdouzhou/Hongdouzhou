//34.统计字符个数
#include<stdio.h>
int main()
{
	char c;
	int upper=0,lower=0,digit=0,space=0,other=0;
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z')
			upper++;
		else if(c>='A'&&c<='Z')
			lower++;
		else if(c>='0'&&c<='9')
			digit++;
		else if(c==' ')
			space++;
		else
			other++;
	}
	printf("upper:%d\n",upper);
	printf("lower:%d\n",lower);
	printf("digit:%d\n",digit);
	printf("space:%d\n",space);
	printf("other:%d\n",other);
	return 0;
}