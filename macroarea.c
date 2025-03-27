#include<stdio.h>
#define Pi 3.14159
#define circ(r) Pi*r*r
#define sqr(x) x*x
#define tri(b,h) {0.5*b*h}  
void main(){
	int r ;
	printf("enter the radius of the circle :");
	scanf("%d",&r);
	printf("Area of the circle is :%f\n",circ(r));
	
	int x;
	printf("enter the side of the square:");
	scanf("%d",&x);
	printf("Are of the square is :%d\n",sqr(x));
	
	int b,h;
	printf("enter the base and height of the triangle:");
	scanf("%d%d",&b,&h);
	printf("Area of the triangle is :%d\n",tri(b,h));
}
