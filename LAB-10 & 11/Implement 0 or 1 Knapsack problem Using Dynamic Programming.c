#include <stdio.h>
int main() {
    int n, W;
    printf("Enter number of items: ");
    scanf("%d", &n);

    int wt[n], profit[n];
    printf("Enter weights of items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &wt[i]);
    }

    printf("Enter profits of items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &profit[i]);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &W);

    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            }
            else if (wt[i - 1] <= w) {
         int include = profit[i - 1] + dp[i - 1][w - wt[i - 1]];
                
             int exclude = dp[i - 1][w];
       dp[i][w] = (include > exclude) ? include : exclude;
            }
            else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
  printf("Maximum profit = %d\n", dp[n][W]);
    return 0;
}
