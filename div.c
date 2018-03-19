#include<stdio.h>
int main()
{
    int a,b,i;
    char s;
    printf("enter the numbers:");
    for(i=1;i<=3;i++)
    {
        scanf("%d %c %d",&a,&s,&b);
        if(s=='/')
        {
            printf("%d",a/b);
        }
        else
        {
            printf("%d",a%b);
        }
    }
}
