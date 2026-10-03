#include <stdio.h>
int search(char *str, char ch)
{
    int i = 0, found = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            printf("Character found at position %d\n", i + 1);
            found = 1;
        }
        i++;
    }
    if (found == 0)
        printf("Character not found");
}
int main()
{
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);

    printf("Enter a character: ");
    scanf("%c", &ch);

    search(str, ch);
}