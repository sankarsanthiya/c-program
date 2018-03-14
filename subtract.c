#include <stdio.h>

int main()
{
	int h,m,eh,em; 
	int t1,t2,res,min,sec;
	printf("enter the start time hours and minutes:");
	scanf("%d %d",&h,&m);
	printf("enter the end time hours and minutes:");
	scanf("%d %d",&eh,&em);
	if(h>eh)
	{
		eh=eh+12;
	}
	t1=(h*60)+m;
	t2=(eh*60)+em;
	res=t2-t1;
	min=res/60;
	sec=res%60;
		printf("the difference is:%dhr:%dmin",min,sec);
	return 0;
}
