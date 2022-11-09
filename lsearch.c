#include <stdio.h>
#include <stdlib.h>

// set your linearsearch function and its arguments
int linearSearch(int *a, int key, int imin, int imax)
{
    int i;
    for (i = imin; i < imax; i++)
    {
        if (a[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int *arr = NULL;
    int i;
    int malloc;
    int num, key, loc;

    printf("How many numbers; ");
    scanf("%d", &num);

    arr = (int *)malloc(num * sizeof(int));
    printf("Enter the nmbers: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the search key: ");
    scanf("%d", &key);
    loc = linearSearch(arr, key, 0, num - 1);
}