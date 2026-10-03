#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n =5;
    int *arr;
    arr =(int *)malloc(n *sizeof(int));
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    for (int i=0;i<n;i++)
        printf("%d ", arr[i]);
    free(arr);
}