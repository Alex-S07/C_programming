#include<stdio.h>
int arsum(int arr[] ,int len);
int main()
{
    int a[10],n,i,sum=0;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=arsum(a,n);
    printf("sum of elements of array = %d\n",sum);
    return 0;
}

int arsum(int arr[],int len )
{
    int i,sum=0;
    for(i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}