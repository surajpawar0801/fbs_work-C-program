#include <stdio.h>
int mystrlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++; 
    return i;
}

int main()
{
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    len1 = mystrlen(str1);
    len2 = mystrlen(str2);

    if (len1 > len2)
        printf("Larger string = %s", str1);
    
    else if (len2 > len1)
        printf("Larger string = %s", str2);
    
    else
        printf("Both strings are equal in length");
    
}