#include <stdio.h>
char *mystrstr(char *, char *);
int main()
{
    char str1[50] = "suraj 0801";
    char str2[50] = "0801";

    printf("%s", mystrstr(str1, str2));
}

char *mystrstr(char *str1, char *str2)
{
    int i, j;

    for(i =0; str1[i]!='\0';i++)
    {
        j = 0;

        while(str1[i+j]==str2[j]&&str2[j]!='\0')
        {
            j++;
        }
        if(str2[j]=='\0')
            return &str1[i];
    }
    return NULL;
}
