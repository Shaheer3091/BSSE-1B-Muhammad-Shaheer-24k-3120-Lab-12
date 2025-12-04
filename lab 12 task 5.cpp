#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str1[25],str2[25];
	int i;
	printf("Enter string 1\n");
	gets(str1);
	printf("\nEnter string 2\n");
	gets(str2);
	char *ptr;
	ptr=(char*)malloc(50*sizeof(char));
	
	ptr=strcat(str1,str2);
	
	printf("%s",ptr);
	
	
	
}
