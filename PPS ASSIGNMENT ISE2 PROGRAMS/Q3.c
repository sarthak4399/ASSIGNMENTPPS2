// Write a C program to count numbers between 1 to 100 not divisible by 7, 13 and 17.

#include <stdio.h>

int main()
{
    int a = 7, b = 13, c = 17;
    int n, i, count = 0;

    for (i = 1; i <= 100; i++)
    {
        if ((i % a != 0) && (i % b != 0) && (i % c != 0))
        {
            count += 1;
        }
    }
    printf("Numbers between 1 and 100 not divisible by %d %d %d are %d\n", a, b, c, count);
    return 0;
}
