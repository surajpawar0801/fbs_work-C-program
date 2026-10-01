#include <stdio.h>
int main()
{
    int arr[]={5,2,8,1,8,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i = i + 2) 
        printf("%d ", arr[i]);
}