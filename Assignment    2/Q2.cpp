#include <stdio.h>
int main()
{
	int a,b,c;
	if(a==b&&b==c)
	{
	printf("Equilateral triangle");
    }
	else if (a==b||b==c||a==c)
	{
		printf("Isosceles triangle");
	}
	else 
	{
		printf("Scalene");
	}
	
}