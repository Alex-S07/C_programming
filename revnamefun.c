#include<stdio.h>
#include<string.h>
void rev(char str[]);
void main()
{
    char str[100];
    printf("enter the string");
    scanf("%s",str);
    rev(str);
}
void rev(char str[])
{
    char temp[100];
    int i,len;
    len=strlen(str);
    temp[len]='\0';
    for(i=len;i>=0;i--)
    {
        temp[i] = str[len - i - 1];

    }
    printf("the reversed string is %s",temp);
}