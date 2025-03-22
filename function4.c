#include<stdio.h>
int comb(int ,int);
void main()
{
int n,r,result;
printf("enter the n and r value of combination ");
scanf("%d%d",&n,&r);
result = comb(n,r);
printf("no of combination %d",result);
}
int comb(int x ,int y)
{
int f=1,i=1,d=1,f1=1,f2=1,c=1;
d = x-y;
for(i=1;i<=x;i++)
{
f=f*i;
}
for(i=1;i<=y;i++)
{
f1=f1*i;
}
for(i=1;i<=d;i++)
{
f2=f2*i;
}
c=f/(f1*f2);
return (c);
}
