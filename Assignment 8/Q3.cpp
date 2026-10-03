#include <stdio.h>
int main() 
{
    int arr[] ={5,22,8,41,22,44};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i=0;i<n;i++)
        sum =sum+arr[i];
    printf("Sum = %d", sum);
}