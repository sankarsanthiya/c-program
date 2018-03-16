#include<stdio.h>
int main()
{
    int n;
    char s[20];
    printf("enter thr string:");
    scanf("%s",s);
    n=strlen(s);
    if(n%2==0)
    {
        s[n/2]='*';
        s[(n-1)/2]='*';
    }
    else
    {
        s[n/2]='*';
    }
    printf("%s",s);
    return 0;
}
