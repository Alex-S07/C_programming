#include<stdio.h>
void fib(int);
void main()
{
    int num;
    printf("enter the nmber of terms");
    scanf("%d",&num);
    fib (num);

}
void fib(int n)
{
    int a=0,b=1,c=0,i;
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}
