#include<stdio.h>
int fact(int);
void main()
{
int num , result;
printf("enter the num ");
scanf("%d",&num);
result = fact(num);
printf("factorial of the given number is %d",result);
}
int fact(int x)
{
int f=1,i=1;
for(i=1;i<=x;i++)
{
f=f*i;
}
return (f);
}
