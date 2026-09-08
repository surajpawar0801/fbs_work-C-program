#include <stdio.h>
int main()
{
	int a=10;
	int b=88;
	int c=20;
	if (a>b)
	   if (a>c)
	   printf("%d A Greatest",a);
	   else 
	   printf("%d C greatest",c);
	else if (b>c)
	     printf("%d B Greatest",b);
		 else 
		 printf("%d C Greatest",c);   
}