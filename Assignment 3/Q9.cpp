#include <stdio.h>
int main()
{
	int n=121;
	int temp=n;
	int sum=0;
	while(n>0)
	{
		int digit=n%10;
		sum=sum*10+digit;
		n=n/10;
	}
	if (sum==temp)
	printf("Palindrome number %d",temp);
	else
	printf("Palindrome not number %d",temp);
}