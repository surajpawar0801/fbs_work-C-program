#include <stdio.h>
char *mystrnstr(char *, char *, int);
int main()
{
    char str1[100] = "suraj 0801";
    char str2[50] = "0801";
    
    printf("%s", mystrnstr(str1, str2, 10));
}
char *mystrnstr(char *str1, char *str2, int n)
{
    int i, j;

    for (i = 0;str1[i]!='\0'&&i<n;i++)
    {
        j = 0;

        while (str2[j] != '\0' &&
               str1[i+j]==str2[j] &&
               i+j<n)
        {
            j++;
        }
        if (str2[j] =='\0')
            return &str1[i];
    }
    return NULL;
}