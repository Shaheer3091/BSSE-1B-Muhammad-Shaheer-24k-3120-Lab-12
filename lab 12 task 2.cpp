#include<stdio.h>
#include<stdlib.h>
int main(){
	char* ptr;
	int count=0,i;
	
	ptr=(char*)malloc(50*sizeof(char));
	
	printf("Enter the string you want to give\n");
	
	scanf("%s",ptr);
	
	printf("%s\n",ptr);
	
    for(i=0;ptr[i]!='\0';i++){
    	count++;
	}
	count--;
    for(i=count;i>=0;i--){
    	printf("%c",ptr[i]);
	}
	
	free(ptr);
	
}
