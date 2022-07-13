#include <stdio.h>
int main()
{
    int r, c, a[100][100], b[100][100], substration[100][100], i, j;
    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c);
    printf("\nEnter elements of 1st matrix:\n");
    /* Storing elements of first matrix entered by user. */
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    /* Storing elements of second matrix entered by user. */
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    /*substracting  Two matrices */
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            substration[i][j] = a[i][j] - b[i][j];
    /* Displaying the resultant substration matrix. */
    printf("\nSubstratction of two matrix is: \n\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d     ", substration[i][j]);
            if (j == c - 1)
                printf("\n\n");
        }
    return 0;
}