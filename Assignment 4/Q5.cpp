#include <stdio.h>
int main()
{
	int n,choice,i,count,temp,digit,reverse,sum;
	printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n1. Check Even or Odd");
    printf("\n2. Check Prime or Not");
    printf("\n3. Check Palindrome or Not");
    printf("\n4. Check Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
	switch(choice)
	{
		case 1:
		   { 
			int no=11;
         	if (no%2==0)
           		printf ("The number is even");
        	else
	         printf ("The number is odd");
	       }
	    case 2:
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
        case 3:
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
        case 4:
           {
		     if(n > 0)
                  printf("Positive number");
              else if(n < 0)
                printf("Negative number");
              else
                printf("Zero");
              break; 
           }
		case 5:
			{
			    reverse = 0;

            for(temp = n; temp > 0; temp = temp / 10)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
            }
               printf("Reverse = %d", reverse);
             break;	
            }
        case 6:
        	{
		      	int n=12345;
             	int first,last,sum;
             	last=n%10;
            	while(n>=10)
            	{
            		n=n/10;
	            }
               	first=n;
	            sum=first+last;
	            printf("  sum first and last digit = %d",sum);
	     	}
    }
}