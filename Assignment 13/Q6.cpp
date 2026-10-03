#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 11;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    arr[0] = 3;
    arr[1] = 3;
    arr[2] = 3;
    arr[3] = 35;
    arr[4] = 5;
    arr[5] = 5;
    arr[6] = 6;
    arr[7] = 32;
    arr[8] = 12;
    arr[9] = 4;
    arr[10] = 1;
    for (int i =0;i <n;i++) {
        int prime = 1;
        if (arr[i]< 2)
            prime = 0;
        for (int j=2; j<arr[i]; j++) {
            if (arr[i] %j ==0) {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", arr[i]);
    }
    free(arr);

}