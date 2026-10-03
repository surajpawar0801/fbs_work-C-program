#include <stdio.h>
int main()
{
    int arr[] = {3,3,3,35,5,5,6,32,12,4,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    for (int i = 0;i< n;i++) {
        int prime = 1;
        if (arr[i] < 2)
            prime = 0;
        for (int j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", arr[i]);
    }
}