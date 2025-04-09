#include <stdio.h>

#define SUM_ARRAY(arr, size, sum)  \
    for (int i = 0; i < size; i++) { \
        sum += arr[i];             \
    }

int main() {
    int size, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    SUM_ARRAY(arr, size, sum);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}