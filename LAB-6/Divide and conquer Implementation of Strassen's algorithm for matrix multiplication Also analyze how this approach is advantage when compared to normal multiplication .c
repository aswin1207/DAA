#include <stdio.h>
int main()
{
    int A[2][2], B[2][2], C[2][2];
    int p, q, r, s, t, u, v;
    int i, j;

    printf("Enter 4 Matrix A Elements:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter 4 Matrix B Elements:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &B[i][j]);
        }
    }
    p = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    q = (A[1][0] + A[1][1]) * B[0][0];
    r = A[0][0] * (B[0][1] - B[1][1]);
    s = A[1][1] * (B[1][0] - B[0][0]);
    t = (A[0][0] + A[0][1]) * B[1][1];
    u = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    v = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);

    C[0][0] = p + s - t + v;
    C[0][1] = r + t;
    C[1][0] = q + s;
    C[1][1] = p - q + r + u;

    printf("Result:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
