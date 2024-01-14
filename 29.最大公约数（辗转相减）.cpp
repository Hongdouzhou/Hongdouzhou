//29.最大公约数（辗转相减）
#include<stdio.h>
int main()
{
	int a,b;
	printf("Please input a,b:\n");
	scanf("%d%d",&a,&b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		if(b>a)
			b=b-a;
	}
	printf("%d\n",a);
	return 0;
}