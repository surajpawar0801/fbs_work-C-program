#include <stdio.h>
int main()
{
	int marks=41;
	if (marks>75)
	{
		printf("Distinction %d ");
	}
	else if (marks>65)
	{
		printf ("First Class %d");
	}
	else if (marks>55)
	{
		printf("Second Class %d");
	} 
	else if (marks>40)
	{
		printf("Pass Class %d");
	}
	else if(marks<40)
	{
		printf("Fail");
	}
}