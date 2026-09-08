#include <stdio.h>
int main()
{
	int age=61;
	if (age<12)
	{
		printf("Child %d");
	}
	else if (age>=12&&age<=19)
	{
		printf("Teenager %d");
	}
	else if (age>=20&&age<=59)
	{
		printf("Audelt %d");
	}
	else if (age>=60)
	{
		printf("senior %d");
	}
}