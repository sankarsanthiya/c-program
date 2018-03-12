#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=1;
    char a[50];
    printf("enter the string:");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
           count++;
        }
    }
    printf("no of words:%d",count);
    
}
