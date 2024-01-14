//10. 用递归求平方和
#include<stdio.h>
#include<math.h>
int fun1(int x)
{
	if(x==1)
		return 1;
	else if(x>1)
		return (pow(x,2));
}
int main()
{
	int x,i,s=0;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
		s+=fun1(i);
	printf("%d",s);
	return 0;
}