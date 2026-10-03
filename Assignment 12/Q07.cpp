#include <stdio.h>
void removeOdd(char *str)
{
    int i=0,j= 0;

    while (str[i]!='\0')
    {
        if (i % 2 == 0)
        {
            str[j]=str[i];
            j++;
        }

        i++;
    }

    str[j] ='\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    removeOdd(str);

    printf("New string: %s", str);
}