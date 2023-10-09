#include <stdio.h>
#include <math.h>

int start, mid, end;
int search(int a[], int LB, int UB, int element, int loc)
{
    start = LB;
    end = UB;
    mid = floor((start + end) / 2);
    
    while ((start <= end )&& (a[mid] != element))
    {
        if (element < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = floor((start + end) / 2);
    }
    if (a[mid] == element)
    {
        loc = mid;
    }
    else
    {
        loc = -1;
    }
    return loc;
}
int main()
{
    int i, n, item;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("Array[%d] : ", i);
        scanf("%d", &array[i]);
    }
    printf("Enter the search element : ");
    scanf("%d", &item);
    int result = search(array, 0, n - 1, item, -1);
    if (result == -1)
    {
        printf("The element not found !!!");
    }
    else
    {
        printf("The resultant location is : %d ", result);
    }

    return 0;
}

