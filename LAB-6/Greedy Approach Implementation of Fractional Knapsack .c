#include <stdio.h>
struct Item
{
    int weight, value;
    float ratio;
};
int main()
{
 int n, capacity;
    int i, j;
    float totalValue = 0;
    struct Item items[100];
    struct Item temp;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weight and value of each item:\n");
    for(i = 0; i < n; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%d%d", &items[i].weight, &items[i].value);
        items[i].ratio = (float)items[i].value / items[i].weight;
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(items[i].ratio < items[j].ratio)
            {
                temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        if(capacity >= items[i].weight)
        {
            capacity = capacity - items[i].weight;
            totalValue = totalValue + items[i].value;
        }
        else
        {
            totalValue =
                totalValue + items[i].ratio * capacity;
            capacity = 0;
            break;
        }
    }
    printf("Maximum value = %.2f\n", totalValue);
    return 0;
}
