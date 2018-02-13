#include<stdio.h>
void transpose(int matrix1[][20], int n1);
 void main()
{
    int n, i, j;
    printf("if n*n is the order of the matrix then enter n");
    scanf("%d", &n);
    if (n <= 20)
    {
        // (int *)malloc(n * n * sizeof(int));
        int matrix[n][20];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("enter the elements");
                scanf("%d", &matrix[i][j]);
            }
        }
        printf("matrix is: \n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d \t", matrix[i][j]);
            }
            printf("\n");
        }
        transpose(matrix, n);
    }
    else
        printf("enter order of matrix less than 20");
}

void transpose(int matrix1[][20], int n1)
{
    int k, l;
    int matrix2[n1][20];
    for (k = 0; k < n1; k++)
    {
        for (l = 0; l < n1; l++)
        {
            matrix2[l][k] = matrix1[k][l];
        }
    }
    printf("transposed matrix is: \n");
    for (k = 0; k < n1; k++)
    {
        for (l = 0; l < n1; l++)
        {
            printf("%d \t ", matrix2[k][l]);
        }
        printf("\n");
    }
}