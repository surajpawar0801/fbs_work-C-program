#include <stdio.h>
void replaceSpace(char *str)
{
    int i = 0;

    while (str[i]!='\0')
    {
        if (str[i]==' ')
        {
            str[i]='@';
        }

        i++;
    }
}
int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    replaceSpace(str);

    printf("New string: %s", str);
}