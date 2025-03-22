#include <stdio.h>

int main() 
{
    int a[100][100], b[100][100], c[100][100], r1, c1, r2, c2, i, j;

    printf("Enter the row size and column size: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the row size and column size: ");
    scanf("%d %d", &r2, &c2);

    if (r1 == r2 && c1 == c2) 
    {
        printf("Enter the elements of matrix 1:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) 
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of matrix 2:\n");
        for (i = 0; i < r2; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) 
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("The resulting matrix after addition is:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) 
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    } 
    else 
    {
        printf("Matrix addition is not possible, sizes are different.\n");
    }

    return 0;
}
