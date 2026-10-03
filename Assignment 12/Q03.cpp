#include <stdio.h>
void removeChar(char *str, int n)
{
    int i = n;

    while (str[i]!='\0')
    {
        str[i]=str[i+1];
        i++;
    }
}
int main()
{
    char str[100];
    int n;
    printf("Enter a string: ");
    gets(str);
    printf("Enter index: ");
    scanf("%d", &n);
    removeChar(str, n);
    printf(" removing character: %s", str);
}