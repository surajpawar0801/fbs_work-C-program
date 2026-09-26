#include <stdio.h>

void checkPalindrome(int no);
void checkEvenOdd(int no);
void checkLeapYear(int year);
void checkVowelConsonant(char ch);
void checkVotingEligibility(int age);
void checkCharacter(char ch);

void checkPalindrome(int no)
{
    if (no / 100 == no % 10)
        printf("%d is a palindrome number\n", no);
    else
        printf("%d is not a palindrome number\n", no);
}

void checkEvenOdd(int no)
{
    if (no % 2 == 0)
        printf("The number is even\n");
    else
        printf("The number is odd\n");
}

void checkLeapYear(int year)
{
    if (year % 400 == 0)
        printf("The year is a Leap Year\n");
    else if (year % 100 == 0)
        printf("The year is not a Leap Year\n");
    else if (year % 4 == 0)
        printf("The year is a Leap Year\n");
    else
        printf("The year is not a Leap Year\n");
}

void checkVowelConsonant(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a vowel\n", ch);
    else
        printf("%c is a consonant\n", ch);
}
void checkVotingEligibility(int age)
{
    if (age >= 18)
        printf("The person is eligible to vote");
    else
        printf("The person is not eligible to vote");
}
void checkCharacter(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        printf("The character is Lowercase");
    else if (ch >= 'A' && ch <= 'Z')
        printf("The character is Uppercase");
    else
        printf("Not an alphabet");
}
int main()
{
    int no;
    int year;
    char ch;
    int age;

    printf("Enter a three-digit number: ");
    scanf("%d", &no);

    checkPalindrome(no);
    checkEvenOdd(no);

    printf("Enter a year: ");
    scanf("%d", &year);

    checkLeapYear(year);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkVowelConsonant(ch);

    printf("Enter your age: ");
    scanf("%d", &age);

    checkVotingEligibility(age);
    
    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkCharacter(ch);
    
    return 0;
}
