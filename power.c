#include<stdio.h>
int main()
{
int p=2,i,n,a,count=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=1)
{
n=n/2;
count++;
}
for(i=0;i<count;i++)
{
p=2*p;
}
if(p==n)
{
printf("yes");
}
else
{
printf("no");
}
