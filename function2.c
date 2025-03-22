#include<stdio.h>
int fib(int);
void main()
{
int num , result;
printf("enter the limit or number of terms to be printed\n");
printf("\n");
scanf("%d",&num);
fib(num);
}
int fib(int x)
{
int i=1,a=0,b=1,c=0;
printf("%d\n",a);
printf("%d\n",b);
for(i=2;i<x;i++)
{
c=a+b;
a=b;
b=c;
printf("%d\n",c);
}
return 0;
}
