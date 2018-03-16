#include<stdio.h>
int main()
{
    int a,b,n,i,temp;
    printf("enter the 2 numbers:");
    scanf("%d %d",&a,&b);
    n=a*b;
    for(i=0;i<=n;i++)
    {
        if(n==i*i)
        {
            temp=1;
        }
        
    }
    if(temp==1)
    {
        printf("yes");
    }
    else
    {
       printf("no");  
    }
}
