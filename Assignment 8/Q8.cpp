#include <stdio.h>
int main()
{
    int arr[5] = {1,7,7,8,9};
    int brr[5] = {80,80,60,48,508};
    int crr[10];
    for (int i = 0;i<5;i++)
        crr[i] = arr[i];
    for (int i=0;i<5;i++)
        crr[i+5] =brr[i];
    printf("Merged array: ");
    for (int i=0;i<10; i++)
        printf("%d ",crr[i]);
}