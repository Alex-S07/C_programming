#include <stdio.h>

int main() {
    char str[100], temp;
    int length, i, j;

    // Input the string
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    // Calculate the length of the string
    for (length = 0; str[length] != '\0'; length++);

    // Reverse the string
    i = length - 1;
    for (j = 0; j < length / 2; j++) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
    }

    // Output the reversed string
    printf("\nReversed string is: %s\n", str);

    return 0;
}