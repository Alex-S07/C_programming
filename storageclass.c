#include<stdio.h>
int x=3;
void num(){
	static int c=2;
	printf("\n The static value is:%d",c);
	c++;
}
int main(){
	auto int i =10;
	register int  b=20;
	printf("THe Automatic value is: %d\n",i);
	printf("The Register value is :%d\n",b);
	printf("The external value is :%d\n",x);
	num();
	num();
	num();
	return 0;
}
