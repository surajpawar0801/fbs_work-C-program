#include <stdio.h>
int main()
{
	int num=3;
	if (num%3==0 and num%5==0)
	{
		printf("Divisible by Both");
	}
	else if (num%3==0)
	{
		printf("Divisible by 3 but not by 5");
	}
	else if (num%5==0)
	{
		printf("Divisible by 3 but not by 5");
	}
}