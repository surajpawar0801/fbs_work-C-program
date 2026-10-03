#include <stdio.h>
void mystrrev(char *);
int main()
{
    char str[50] = "suraj 0801";

    mystrrev(str);

    printf("%s", str);
}
void mystrrev(char *str)
{
    int i = 0, j, temp;
    while(str[i] != '\0')
    {
        i++;
    }

    j = i-1;
    i = 0;
    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
