#include <stdio.h>
int mystrncmp(char *, char *, int);
int main()
{
    char str1[100] = "suraj 0801";
    char str2[50] = "suraj 0802";

    printf("%d", mystrncmp(str1, str2, 8));
}
int mystrncmp(char *str1, char *str2, int n)
{
    int i = 0;

    while (i<n&&str1[i]!='\0'&&str2[i]!='\0')
    {
        if (str1[i]!=str2[i])
        {
            return str1[i]-str2[i];
        }
        i++;
    }
    if (i == n)
        return 0;

    return str1[i]-str2[i];
}