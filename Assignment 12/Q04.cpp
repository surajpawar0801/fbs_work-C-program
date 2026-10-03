#include <stdio.h>
void exchange(char *str)
{
    int i = 0;
    char temp;

    while (str[i] != '\0')
    {
        i++;
    } 
    i--; 
    
    temp = str[0];
    str[0] = str[i];
    str[i] = temp;
}
int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    exchange(str);

    printf("New string: %s", str);
}