#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 7;
    arr[3] = 9;
    arr[4] = 0;
    for (int i =n-1;i>=0;i--)
        printf("%d ", arr[i]);
    free(arr);
}