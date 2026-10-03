#include <stdio.h>
void mystrcat(char *, char *);
int main()
{
    char str1[100] = "suraj ";
    char str2[50] = "0801";

    mystrcat(str1, str2);

    printf("%s", str1);
}

void mystrcat(char *str1, char *str2)
{
    int i=0,j= 0;

    while (str1[i]!= '\0')
    {
        i++;
    }
    while (str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}
