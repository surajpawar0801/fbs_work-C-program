#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 6;
    int *arr;
    int num, found = 0;
    arr = (int *)malloc(n * sizeof(int));
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 8;
    arr[3] = 1;
    arr[4] = 9;
    arr[5] = 3;
    printf("Enter Number: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Number found");
    else
        printf("Number not found");
    free(arr);
}