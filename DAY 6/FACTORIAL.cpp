#include <stdio.h>
int main()
{
    int n;
    int f = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if (n == 0)
    {
        printf("Factorial of 0 is 1.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            f *= i;
        }
        printf("Factorial of %d is %d.\n", n, f);
    }
    return 0;
}