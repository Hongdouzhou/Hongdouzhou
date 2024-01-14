//7.等红灯
#include<stdio.h>
int main()
{
	char a[2];
	int i=0,s;
	gets(a);
	switch(a[i])
	{
		case '0':s=a[i+1]-'0';break;
		case '1':s=1*10+a[i+1]-'0';break;
		case '2':s=2*10+a[i+1]-'0';break;
		case '3':s=3*10+a[i+1]-'0';break;
		case '4':s=4*10+a[i+1]-'0';break;
		case '5':s=5*10+a[i+1]-'0';break;
		case '6':s=6*10+a[i+1]-'0';break;
		case '7':s=7*10+a[i+1]-'0';break;
		case '8':s=8*10+a[i+1]-'0';break;
		case '9':s=9*10+a[i+1]-'0';break;
		case 'A':s=10*10+a[i+1]-'0';break;
		case 'B':s=11*10+a[i+1]-'0';break;
		case 'C':s=12*10+a[i+1]-'0';break;
		case 'D':s=13*10+a[i+1]-'0';break;
		case 'E':s=14*10+a[i+1]-'0';break;
		case 'F':s=15*10+a[i+1]-'0';break;
		default:printf("error\n");
	}
	printf("%d\n",s);
	return 0;
}