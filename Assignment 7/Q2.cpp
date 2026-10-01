#include <stdio.h>
int main (){
	int arr []={5,2,8,1,9,3};
	int n= sizeof (arr) / sizeof (arr[0]);
	int num, found=0;
	printf ("Enter Number:");
	scanf ("%d", &num);
	for (int i = 0; i< n;i++) {
        if (arr[i] == num) 
            found = 1;
            break;
    }
    if (found)
        printf("Number found");
    else
        printf("Number not found");
}