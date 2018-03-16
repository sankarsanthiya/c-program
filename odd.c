#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==1)
        {
            printf("%d\t",a[i]);
        }
    }
}
