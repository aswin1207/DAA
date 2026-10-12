#include <stdio.h>
int main() {
    int n, i, j, temp, a[20];
 printf("Enter number of characters: ");
    scanf("%d", &n);
    printf("Enter frequencies:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    while (n > 1) {
        temp = a[0] + a[1];
 printf("Combine %d and %d = %d\n",
               a[0], a[1], temp);
        a[0] = temp;
        for (i = 1; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
    return 0;
}
