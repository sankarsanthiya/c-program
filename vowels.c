#include<stdio.h>
int main()
{
    char a[20];
    int i=0,temp=0;
    printf("enter the string:");
    scanf("%s",a);
   while(a[i]!='\0')
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            temp=1;
            i++;
    }
    if(temp==1)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
