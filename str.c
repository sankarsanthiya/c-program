#include<stdio.h>
int main()
{
    int b,a;
    char n[10],h[10];
    printf("enter the string1:");
    scanf("%s",n);
    printf("enter the second string2:");
    scanf("%s",h);
    a=strlen(n);
    b=strlen(h);
    if(a>b)
    {
        printf("%s",n);
    }
    else if(b>a)
    {
        printf("%s",h);
    }
     else
    {
        printf("%s",n);
    }
    return 0;
   
}
