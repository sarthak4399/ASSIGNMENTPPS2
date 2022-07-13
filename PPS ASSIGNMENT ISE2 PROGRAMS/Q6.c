#include <stdio.h>
int main()
{
    int i, j, rows = 5, count = 0;
    // printf("Enter the number of rows: ");
    // scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            count++;
            printf("%d\t", count);
        }
        printf("\n");
    }
    return 0;
}
