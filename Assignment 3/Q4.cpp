#include <stdio.h>
int main ()
{
	int no=7;
	int i=2;
	int status=0;
	while (i<no)
	{
		if(no%i==0)
		{
		status=1;
		break;
	    }
		i++;
	}
	if (status==0)
	  printf("  prime");
	else
	printf("not prime");
}