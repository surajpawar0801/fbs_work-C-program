#include <stdio.h>
int main()
{
	int n =153;
	int temp=n;
	int rem,sum=0;
	while(n>0)
	{
	rem=n%10;
	sum=sum+rem*rem*rem;
	n=n/10;
    }
	if (sum==temp)
	printf("Armstrong number");
	else 
    printf("Not a Armstrong number");
}