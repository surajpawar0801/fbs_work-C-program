#include <stdio.h>
int main()
{
    int arr[] = {5,2,8,5,9};
	    int n=sizeof(arr)/sizeof(arr[0]);

    for (int i =0; i<n;i++) 
        if (arr[i] %2 == 0)
            printf("%d is Even\n", arr[i]);
        else
            printf("%d is Odd\n", arr[i]);
}
    