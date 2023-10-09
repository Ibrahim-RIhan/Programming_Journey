#include <stdio.h>
#include <math.h>

int binarySearch(int a[], int LB, int UB, int element)
{
    if (LB > UB)
    {
        return -1;
    }
    int mid = floor((LB + UB) / 2);
    
    if (a[mid] == element)
    {
        return mid;
    }
    else if (a[mid] > element)
    {
        return binarySearch(a, LB, mid - 1, element);
    }
    else
    {
        return binarySearch(a, mid + 1, UB, element);
    }
}

int main()
{
    int i, n, item;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("Enter the search element: ");
    scanf("%d", &item);
    int result = binarySearch(array, 0, n - 1, item);
    if (result == -1)
    {
        printf("The element was not found.\n");
    }
    else
    {
        printf("The element was found at index %d.\n", result);
    }

    return 0;
}
