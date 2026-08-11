#include <stdio.h>

int sum(int x, int n)
{
    if(n == 0)
        return 0;

    return 1 + x * sum(x, n - 1);
}

int main()
{
    int x, n, result;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    result = sum(x, n);

    printf("Sum = %d", result);

    return 0;
}
