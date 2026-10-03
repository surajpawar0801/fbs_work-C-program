#include <stdio.h>
int countWords(char *str)
{
    int i = 0, count = 0;

    while (str[i]!='\0')
    {
        if (str[i]!=' '&&(i==0||str[i - 1]==' '))
        {
            count++;
        }

        i++;
    }
    return count;
}
int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Number of words = %d", countWords(str));
}