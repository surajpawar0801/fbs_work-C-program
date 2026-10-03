#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *arr;
    int min, max;
    printf("Enter size: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    free(arr);
}