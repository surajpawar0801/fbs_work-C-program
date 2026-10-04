#include <stdio.h>
int printnumbers(int *n){
	int i;
	
	for(i=1;i<= *n;i++)
	    printf("%d ",i);
	    
}
int main (){
	
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	printnumbers(&num);
	
}