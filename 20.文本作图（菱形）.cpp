//20.文本作图（菱形）
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=3;j>=i;j--)
			printf(" ");
		for(k=1;k<=(2*i-1);k++)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(k=5;k>=(2*i-1);k--)
			printf("*");
		printf("\n");
	}
	return 0;
}