#include <stdio.h>
#include <string.h>

void bubbleSortReverse(char names[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1])  < 0) { 
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    char names[100][100];

    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar();

    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        gets(names[i]);
        for (int j = 0; names[i][j] != '\0'; j++) {
            if (names[i][j] == '\n') {
                names[i][j] = '\0';
                break;
            }
        }
    }

    bubbleSortReverse(names, n); 

    printf("\nNames in reverse alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}