//1.大小写字母转换
#include<stdio.h>
int main()
{
	char c;
	printf("Please input a character:\n");
	scanf("%c",&c);
	printf("The original:%c\n",c);
	if(c>='a'&&c<='z')
		c=c-32;
	else if(c>='A'&&c<='Z')
		c=c+32;
	printf("The transformed:%c\n",c);
	return 0;
}