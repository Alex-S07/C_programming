#include <stdio.h>

#define SUM_ARRAY(arr, size) ({      \
    int sum = 0;                    \
    for (int i = 0; i < size; i++) {\
        sum += arr[i];              \
    }                               \
    sum;                            \
})

int main() {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = SUM_ARRAY(arr, size);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}