#include<stdio.h>
int main()
{
    int n;
    char a[10],b[10];
    printf("enter the string1:");
    scanf("%s",a);
    printf("enter the second string2:");
    scanf("%s",b);
    if(a>b)
    {
        printf("%s",a);
    }
    else if(b>a)
    {
        printf("%s",b);
    }
     else
    {
        printf("%s",a);
    }
    return 0;
   
}
