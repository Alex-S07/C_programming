#include<stdio.h>
#include<string.h>
int main()
{
    char names[5][20];
    int i,n;
    printf("enter the number of names");
    scanf("%d",&n);
    for (i=0;i<n;i++)
{
    printf("enter the name\n");
    scanf("[^\n]",&names[i]);
}
    for(i=0;i<n;i++)
    {
        strrev(names[i]);
        printf("%s\n",names[i]);
    }
}