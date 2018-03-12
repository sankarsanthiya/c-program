#include<stdio.h>
int main()
{
    int n,r,l;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the first & last number:");
    scanf("%d %d",&r,&l);
    if(n>r && n<l)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
