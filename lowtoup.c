#include <stdio.h>

int main() {
    char learn[20];
    int i;

    // Input the string
    printf("\nEnter the string: ");
    scanf("%[^\n]", learn);

    // Convert uppercase to lowercase and lowercase to uppercase
    for (i = 0; learn[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (learn[i] >= 'a' && learn[i] <= 'z') {
            learn[i] = learn[i] - 32; // Convert to uppercase
        }
        // Check if the character is an uppercase letter
        else if (learn[i] >= 'A' && learn[i] <= 'Z') {
            learn[i] = learn[i] + 32; // Convert to lowercase
        }
    }

    // Output the modified string
    printf("The string is: %s\n", learn);

    return 0;
}