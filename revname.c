#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 100

void bubbleSortReverse(char names[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) < 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    char names[MAX_NAMES][MAX_LENGTH];

    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar(); 

    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        fgets(names[i], MAX_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; 

    bubbleSortReverse(names, n);

    printf("\nNames in reverse alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
}