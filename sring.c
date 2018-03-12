#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,n,temp;
    printf("enter the value:");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
    if(a[i]=='1' || a[i]=='0')
    {
        temp=1;
    }
    else
    {
       temp=0;
    }
    }
    if(temp==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
