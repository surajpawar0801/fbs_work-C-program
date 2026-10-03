#include <stdio.h>
int mystrcmp(char *,char *);
int main(){
	char str1[50]="suraj 0801";
	char str2[50]="suraj 0801";
	printf("%d",mystrcmp(str1,str2));
}
int mystrcmp (char *str1, char *str2)
{
	int i=0;
	
	while (str1[i]==str2[i]&&str1[i]!='\0'){
		i++;
    }
    if(str1[i] == str2[i])
        return 0;	
      
	else if(str1[i] > str2[i])
        return 1;
    else
        return -1;
    
}  