#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bSearch(int arr[], int size, int item);

int main(void)
{
    int low, high, mid;
}

int bSearch(int arr[], int size, int item)
{
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low) / 2;

    while (low <= high)

    {
        mid = low + (high - low) / 2;
        if (arr[mid] == item)
            return mid;
        else if (arr[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // unsuccessful result
}
