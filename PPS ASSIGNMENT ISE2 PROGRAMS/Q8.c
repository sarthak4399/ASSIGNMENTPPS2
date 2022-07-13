#include <stdio.h>
int main()
{
    int i, n = 20;
    float arr[20];
    printf("Enter 20 numbers to find largest  among them :\n ");

    for (i = 0; i < 20; ++i)
    {
        printf("\nEnter Number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    for (i = 1; i < n; ++i)
    {
        if (arr[0] < arr[i])

            arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);
    return 0;
}