#include<stdio.h>
int mystrlen(char *);
int main(){
    char str1[50] ="Suraj 0801";

    printf("%d",mystrlen(str1));
}

int mystrlen(char *str1){
    int i = 0;
    while(str1[i] != '\0'){
        i++;
    }
    return i;
}