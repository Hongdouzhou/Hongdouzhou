//2.数字转字母
#include<stdio.h>
int main()
{
	int a;
	printf("Please input a number:\n");
	scanf("%d",&a);
	printf("The original:%d\n",a);
	if(a>=0&&a<=9)
		printf("The transformed:%c\n",a+48);
	return 0;
}