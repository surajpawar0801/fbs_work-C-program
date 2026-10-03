#include <stdio.h>
void mystrncpy(char *, char *, int);
int main()
{
    char str1[50] = "suraj 0801";
    char str2[50];
    mystrncpy(str2, str1, 5);
    printf("%s", str2);
}
void mystrncpy(char *str2, char *str1, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}
