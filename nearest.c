#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
while(n%10!=0)
{
n=n+1;
}
printf("%d",n);
}
