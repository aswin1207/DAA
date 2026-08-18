#include <stdio.h>

int main()
{
    int n, i, j, moves;
    int pos[20], next[20], gap[20];
    char rod[] = {'A', 'B', 'C'};
    int from, to;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    moves = 1;

    for (i = 1; i <= n; i++)
    {
        pos[i] = 0;
        gap[i] = moves;
        next[i] = moves;
        moves = moves * 2;
    }

    moves = moves - 1;

    for (i = 1; i <= moves; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == next[j])
                break;
        }

        next[j] = next[j] + gap[j] * 2;
        from = pos[j];

        if (j % 2 == 1)
        {
            if (pos[j] == 0)
                pos[j] = 2;
            else if (pos[j] == 2)
                pos[j] = 1;
            else
                pos[j] = 0;
        }
        else
        {
            if (pos[j] == 0)
                pos[j] = 1;
            else if (pos[j] == 1)
                pos[j] = 2;
            else
                pos[j] = 0;
        }

        to = pos[j];

        printf("Move disk %d from %c to %c\n",
               j, rod[from], rod[to]);
    }

    return 0;
}
