#include <stdio.h>
int main()
{
    int arr[5] = {5,2,8,1,3};
    int n = 5, temp;

    for (int i =0;i<n;i++) {
        for (int j =i+1;j<n;j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}