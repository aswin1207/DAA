#include <stdio.h>

int main()
{
    int x, n, i;
    int sum = 0;
    int term = 1;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        sum = sum + term;
        term = term * x;
    }

    printf("Sum = %d", sum);

    return 0;
}
