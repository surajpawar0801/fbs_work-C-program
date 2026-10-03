#include <stdio.h>
void mystrupper(char *);
int main()
{
    char str[50] = "suraj 0801";

    mystrupper(str);

    printf("%s", str);
}
void mystrupper(char *str)
{
    int i = 0;
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }
}

