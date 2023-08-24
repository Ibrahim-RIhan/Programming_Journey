#include <stdio.h>

int main()
{
    int row, col, i, j;
    printf("Enter the number of Rows of the array : ");
    scanf("%d", &row);
    printf("\nEnter the number of Columns of the array : ");
    scanf("%d", &col);

    // 1st Matrix Input
    int A[row][col];
    printf("\nEnter the Element of the Matrix A : \n \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // 2nd Matrix Input
    int B[row][col];
    printf("\nEnter the Element of the Matrix B : \n \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // 1st Matrix Show
    printf("\nMatrix A : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf(" %d  \t", A[i][j]);
        }
        printf("\n");
    }



    // 2nd Matrix Show
    printf("\nMatrix B : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf(" %d  \t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}