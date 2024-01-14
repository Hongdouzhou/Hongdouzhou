//2. 使用递归求Fibonacci数列
#include<stdio.h>
int Fibonacci(int n)
{
	int s;
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else if(n>1)
		return (Fibonacci(n-1)+Fibonacci(n-2));
}
int main()
{
	int n,s;
	scanf("%d",&n);
	s=Fibonacci(n);
	printf("fib(%d)=%d\n",n,s);
	return 0;
}