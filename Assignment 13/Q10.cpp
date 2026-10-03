#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5, temp;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 8;
    arr[3] = 1;
    arr[4] = 3;
    for (int i =0;i<n;i++) {
        for (int j = i+1;j<n;j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i=0;i<n;i++)
        printf("%d ", arr[i]);
    free(arr);
}