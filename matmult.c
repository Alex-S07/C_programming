#include <stdio.h>

int main() 
{ int i, j, k, r1, c1, r2, c2;

    printf("Enter the row size and column size: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the row size and column size of another matrix: ");
    scanf("%d %d", &r2, &c2);
    
    int a[r1][c1],b[r2][c2],c[r1][c2];

    if (c1 == r2) 
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
            for (j = 0; j < c2; j++) 
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++) 
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        printf("Multiplied matrix:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    } 
    else 
    {
        printf("Matrix multiplication is not possible, column size of first matrix is not equal to row size of second matrix.\n");
    }

    return 0;
}
