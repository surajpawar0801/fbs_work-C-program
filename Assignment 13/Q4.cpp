#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 8;
    arr[3] = 5;
    arr[4] = 9;
    for (int i =0;i<n;i++) {
        if (arr[i]%2==0)
            printf("%d is Even\n", arr[i]);
        else
            printf("%d is Odd\n", arr[i]);
    }
    free(arr);
}