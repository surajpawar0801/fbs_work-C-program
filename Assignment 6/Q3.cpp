#include <stdio.h>

void sum();
void printTableOfFive();
int printsNumbers(int n);
int add(int a, int b);
int prime(int no);
int armstrong(int n);
int perfect(int n);
int factorial(int n);

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    printTableOfFive();

    int result = printsNumbers(10);
    printf("\nResult = %d\n", result);

    int start = 1, end = 5;
    int sum = 0;

    while (start <= end)
    {
        sum = sum + start;
        start++;
    }

    printf("Sum = %d\n", sum);

    result = add(10, 20);
    printf("sum=%d ", result);

   
    int no = 7;
    int status;

    status = prime(no);

    if (status == 0)
        printf("prime");
    else
        printf("not prime");
        
    int n = 153;
    

    result = armstrong(n);

    if (result == 1)
        printf("Armstrong number");
    else
        printf("Not a Armstrong number");

    int num = 28;
  
    result = perfect(n);

    if (result == 1)
        printf("%d Perfect number", n);
    else
        printf("%d Not a Perfect number", n);

    int num2= 5;
    

    result = factorial(n);

    printf("factorial is %d", result);

    return 0;
}

void printTableOfFive()
{
    int no = 5;
    int i = 1;

    while (i <= 10)
    {
        printf("%d * %d = %d\n", no, i, no * i);
        i++;
    }
}

int printsNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return n;
}

int add(int a, int b)
{
    return a + b;
}
int prime(int no)
{
    int i = 2;
    int status = 0;

    while (i < no)
    {
        if (no % i == 0)
        {
            status = 1;
            break;
        
    }
        i++;
    }

    return status;
}
int armstrong(int n)
{
    int temp = n;
    int rem, sum = 0;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (sum == temp)
        return 1;
    else
        return 0;
}
int perfect(int n)
{
    int i = 1;
    int sum = 0;

    while (i <= n / 2)
    {
        if (n % i == 0)
            sum = sum + i;
        i++;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}
int factorial(int n)
{
    int i = 1;
    int fact = 1;

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    return fact;
}


