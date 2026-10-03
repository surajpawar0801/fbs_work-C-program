#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6;
    int *arr;
    int sum =0;
    arr = (int *)malloc(n *sizeof(int));
    arr[0] = 5;
    arr[1] = 22;
    arr[2] = 8;
    arr[3] = 41;
    arr[4] = 22;
    arr[5] = 44;
    for (int i =0;i<n;i++)
        sum = sum + arr[i];
    printf("Sum = %d", sum);
    free(arr);
}