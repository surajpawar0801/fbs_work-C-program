#include <stdio.h>
int mystrcasecmp(char *, char *);

int main()
{
    char str1[50] = "Suraj";
    char str2[50] = "surij";

    printf("%d", mystrcasecmp(str1, str2));
}

int mystrcasecmp(char *str1, char *str2)
{
    int i = 0;

    while(str1[i]!='\0'&&str2[i]!='\0')
    {
        if(str1[i]>='A'&&str1[i]<='Z')
            str1[i] = str1[i] + 32;

        if(str2[i] >='A'&&str2[i]<='Z')
            str2[i] =str2[i]+32;

        if(str1[i]!=str2[i])
        {
            if(str1[i]>str2[i])
                return 1;
            else
                return -1;
        }
        i++;
    }

    if(str1[i]==str2[i])
        return 0;
    else if(str1[i]>str2[i])
        return 1;
    else
        return -1;
}
