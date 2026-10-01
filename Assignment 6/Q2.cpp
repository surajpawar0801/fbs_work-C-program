#include <stdio.h>

int triangle(int a, int b, int c);
int calculate(int num1, int num2, char op);
int greatest(int a, int b, int c);
int divisible(int num);
int ageGroup(int age);

int main()
{
    int num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    result = calculate(num1, num2, op);

    printf("Result is %d\n", result);

    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    result = triangle(a, b, c);

    if (result == 1)
        printf("Equilateral triangle\n");
    else if (result == 2)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");


    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = greatest(a, b, c);

    printf("%d is Greatest\n", result);

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = divisible(num);

    if (result == 1)
        printf("Divisible by Both 3 and 5\n");
    else if (result == 2)
        printf("Divisible by 3 but not by 5\n");
    else if (result == 3)
        printf("Divisible by 5 but not by 3\n");
    else
        printf("Not divisible by 3 or 5\n");

    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    result = ageGroup(age);

    if (result == 1)
        printf("Child\n");
    else if (result == 2)
        printf("Teenager\n");
    else if (result == 3)
        printf("Adult\n");
    else
        printf("Senior\n");

    return 0;
}
int triangle(int a, int b, int c)
{
    if (a == b && b == c)
        return 1;
    else if (a == b || b == c || a == c)
        return 2;
    else
        return 3;
}
int calculate(int num1, int num2, char op)
{
    if (op == '+')
        return num1 + num2;
    else if (op == '-')
        return num1 - num2;
    else if (op == '*')
        return num1 * num2;
    else if (op == '/')
        return num1 / num2;
    else if (op == '%')
        return num1 % num2;
    else
        return 0;
}
int greatest(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else if (b > c)
        return b;
    else
        return c;
}
int divisible(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
        return 1;
    else if (num % 3 == 0)
        return 2;
    else if (num % 5 == 0)
        return 3;
    else
        return 4;
}
int ageGroup(int age)
{
    if (age < 12)
        return 1;
    else if (age >= 12 && age <= 19)
        return 2;
    else if (age >= 20 && age <= 59)
        return 3;
    else
        return 4;
}
