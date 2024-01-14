//3.两个变量 值的交换
#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Please enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Original:\na=%d,b=%d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("Transformed:\na=%d,b=%d\n",a,b);
	return 0;
}