#include <stdio.h>
int main()
{
    int arr[5] ={1,3,7,9};
    int n = 5;

    for (int i=n-1;i>=0;i--)
        printf("%d ", arr[i]);
}