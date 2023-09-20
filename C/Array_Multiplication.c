#include <stdio.h>

int main()
{
    int i, j, row1, row2, col1, col2, k, sum = 0;
    printf("Enter the number of Rows of Matrix A: ");
    scanf("%d", &row1);
    printf("Enter the number of Cols of Matrix A: ");
    scanf("%d", &col1);
    printf("Enter the number of Rows of Matrix B: ");
    scanf("%d", &row2);
    printf("Enter the number of Cols of Matrix B: ");
    scanf("%d", &col2);

    // Condition Check
    while (row1 != col2)
    {
        printf("\nError : Array Multiplication not possible! Please Try Again!!! \n \n");
        printf("Enter the number of Rows of Matrix A: ");
        scanf("%d", &row1);
        printf("Enter the number of Cols of Matrix B: ");
        scanf("%d", &col2);
    }

    // 1st Matrix Input
    int A[row1][col1];
    printf("\nEnter the Element of the Matrix A : \n \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // 2nd Matrix Input
    int B[row2][col2];
    printf("\nEnter the Element of the Matrix B : \n \n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply Matrix
    int C[row1][col2];
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col1; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }

    // Show Matrix C
    printf("\nMatrix Multiplication  : \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf(" %d  \t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}