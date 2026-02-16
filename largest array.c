#include <stdio.h>

int main()
{
    int n, i;
    float arr[1000], max;

    // Read number of elements
    scanf("%d", &n);

    // Read float numbers
    for(i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    // Assume first element is maximum
    max = arr[0];

    // Find largest element
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Print with 2 decimal precision
    printf("%.2f", max);

    return 0;
}
