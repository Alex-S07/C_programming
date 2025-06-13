#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum;

    // Reading the first complex number
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Reading the second complex number
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Calculating the sum
    sum = addComplex(num1, num2);

    // Displaying the result
    printf("The sum of the complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}