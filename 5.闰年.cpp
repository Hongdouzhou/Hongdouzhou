//5.闰年
#include<stdio.h>
int main()
{
	int year;
	printf("Please input a year:\n");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}