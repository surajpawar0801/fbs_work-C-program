#include <stdio.h>
char *mystrrchr(char *, char);
int main()
{
    char str[50] = "suraj 0801";
    char ch = '0';
    printf("%s", mystrrchr(str, ch));
}
char *mystrrchr(char *str, char ch)
{
    int i = 0;
    char *last = NULL;
    while(str[i]!='\0')
    {
        if(str[i]==ch)    
            last=&str[i];   
        i++;
    }
    return last;
}
