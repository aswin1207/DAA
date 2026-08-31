#include <stdio.h>

void bucketSort(int arr[], int n)
{
    int bucket[100][100];
    int count[100];
    int i, j, k, bucketIndex;

    // Initialize count of each bucket
    for (i = 0; i < 100; i++)
    {
        count[i] = 0;
    }

    // Put elements into buckets
    for (i = 0; i < n; i++)
    {
        bucketIndex = arr[i] / 10;
        bucket[bucketIndex][count[bucketIndex]] = arr[i];
        count[bucketIndex]++;
    }

    // Sort each bucket
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < count[i] - 1; j++)
        {
            for (k = j + 1; k < count[i]; k++)
            {
                if (bucket[i][j] > bucket[i][k])
                {
                    int temp = bucket[i][j];
                    bucket[i][j] = bucket[i][k];
                    bucket[i][k] = temp;
                }
            }
        }
    }

    // Combine all buckets
    k = 0;

    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < count[i]; j++)
        {
            arr[k] = bucket[i][j];
            k++;
        }
    }
}

void printArray(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[100], n, i;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (0 to 999):\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    printArray(arr, n);

    bucketSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
