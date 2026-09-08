#include <stdio.h>
int main()
{
	int n=145;
	int temp=n;
	int sum=0;
	while(n>0)
	{
		int digit=n%10;
		int flat=1;
		int i=1;
		while (i<=digit)
		{
			flat=flat*i;
			i++;
		}
		sum=sum+flat;
		n=n/10;
	}
	if (sum==temp)
	printf("Strong number %d",temp);
	else
	printf(" Not Strong number %d",temp);
}