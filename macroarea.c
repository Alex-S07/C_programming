#include<stdio.h>
#define PI 3.14159
#define CIRCLE(r) (PI * r * r)
#define SQUARE(a) (a * a)
#define TRIANGLE(b, h) (0.5 * b * h)
#define CYLINDER(d, h) (2 * PI * d * (d + h))

int main() {
    int r, a, b, h, d, h1;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    printf("The area of the circle = %f\n", CIRCLE(r));

    printf("Enter the side of the square: ");
    scanf("%d", &a);
    printf("The area of the square = %d\n", SQUARE(a));

    printf("Enter the base and height of the triangle: ");
    scanf("%d %d", &b, &h);
    printf("The area of the triangle = %f\n", TRIANGLE(b, h));

    printf("Enter the radius and height of the cylinder: ");
    scanf("%d %d", &d, &h1);
    printf("The area of the cylinder = %f\n", CYLINDER(d, h1));

    return 0;
}
