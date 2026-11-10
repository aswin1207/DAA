#include <stdio.h>
int a[20], n;
int place(int row, int col)
{
    int i;
    for (i = 1; i < row; i++)
    {
        if (a[i] == col ||
            (a[i] - col == i - row) ||
            (col - a[i] == i - row))
            return 0;
    }
    return 1;
}
void nqueen(int row)
{
    int col, i, j;
    if (row > n)
    {
        printf("\nSolution:\n");
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (a[i] == j)
                    printf("Q ");
                else
                    printf("- ");
            }
            printf("\n");
        }
        return;
    }
   for (col = 1; col <= n; col++) {
        if (place(row, col)) {
            a[row] = col;
            nqueen(row + 1);
        }
    }
}
int main()
{
    printf("Enter number of queens: ");
    scanf("%d", &n);
    if (n < 1 || n > 20)  {
        printf("Invalid input");
        return 0;
    }
  nqueen(1);
    return 0;
}
