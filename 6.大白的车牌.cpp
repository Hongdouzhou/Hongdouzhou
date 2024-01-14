//6.大白的车牌
#include<stdio.h>
int main()
{
	int i,x,n=0;
	char a[50];
	scanf("%d",&x);
	getchar();   //非常重要！
	for(i=1;i<=x;i++)
	{
		gets(a);
		if(a[0]=='A'||a[0]=='B'||a[0]=='C'||a[0]=='D'||a[0]=='E'||a[0]=='F'||a[0]=='G'||a[0]=='R'||a[0]=='S'||a[0]=='T')
			n++;
	}
	printf("%d",x-n);
	return 0;
}