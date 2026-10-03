#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *arr, *brr, *crr;
    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(n * sizeof(int));
    crr = (int *)malloc(2 * n * sizeof(int));

    arr[0] = 1;
    arr[1] = 7;
    arr[2] = 7;
    arr[3] = 8;
    arr[4] = 9;

    brr[0] = 80;
    brr[1] = 80;
    brr[2] = 60;
    brr[3] = 48;
    brr[4] = 508;

    for (int i =0;i<n;i++)
        crr[i] = arr[i];
    for (int i =0;i<n;i++)
        crr[i + n] =brr[i];
    printf("Merged array: ");
    for (int i =0;i<2*n;i++)
        printf("%d ", crr[i]);
    free(arr);
    free(brr);
    free(crr);
}