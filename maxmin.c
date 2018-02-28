#include<stdio.h>
int main()
{
int i,a[20],max,min,n;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
if(a[0]<a[i])
{
max=a[i];
}
else if(a[0]>a[i])
{
min=a[i];
}
}
printf("maximum:%d\nminimum:%d",max,min);
}
