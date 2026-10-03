#include <stdio.h>
char *mystrchr(char *, char);
int main()
{
    char str[50] = "suraj 0801";
    char ch = 'j';

    printf("%s",mystrchr(str, ch));
}

char *mystrchr(char *str, char ch)
{
    int i = 0;

    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            return&str[i];
        }
        i++;
    }
    return NULL;
}
