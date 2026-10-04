#include<stdio.h>
int checkPalindrome(int *n) {
    int num = *n, rev = 0, digit;

    while(num > 0) {
        digit = num % 10;
        rev = rev*10+digit;
        num = num / 10;
    }

    if(rev == *n)
        printf("%d is Palindrome", *n);
    else
        printf("%d is Not Palindrome", *n);
}

int main() {
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    checkPalindrome(&num);
}