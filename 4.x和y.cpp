//4.x<0    y=-1,	x==0   y=0,	x>0    y=1
#include<stdio.h>
int main()
{
	int x,y;
	printf("Please input x:\n");
	scanf("%d",&x);
	if(x<0)
		printf("x=%d<0	y=-1\n",x,y);
	else if(x==0)
		printf("x=%d=0	y=0\n",x,y);
	else
		printf("x=%d>0	y=1\n",x,y);
	return 0;
}