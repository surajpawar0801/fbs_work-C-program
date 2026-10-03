#include <stdio.h>
void mystrncat(char *, char *, int);
int main()
{
    char str1[100] = "suraj ";
    char str2[50] = "0801";

    mystrncat(str1, str2, 2);

    printf("%s", str1);
}

void mystrncat(char *str1, char *str2, int n)
{
    int i=0,j=0;

    while (str1[i]!='\0')
    {
        i++;
    }
    while (str2[j]!='\0'&&j<n)
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}