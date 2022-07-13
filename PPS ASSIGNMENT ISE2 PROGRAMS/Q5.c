#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter Your Number:");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf(" Entered Number Is Palindrome Number \n");
    else
        printf("Entered Number Is Not Palindrome Number \n");
    return 0;
}