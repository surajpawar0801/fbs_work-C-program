#include <stdio.h>
int main()
{
	int n,temp,digit,sum;
	for(int i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		while(temp!=0)
		{
			digit=temp%10;
			sum+=digit*digit*digit;
			temp/=10;
		}
		if (sum==i)
		{
			printf("%d ",i);
		}
	}
}