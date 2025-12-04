#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[20];
	int marks; 
	
	
};
 
int main(){
	 
	int n,i,value,high=0;
	printf("How many student data you want to enter\n");
	scanf("%d",&n);
	struct student *ptr;
	
	ptr=(struct student*)malloc(sizeof(struct student)*n);
	
	for(i=0;i<n;i++){
		printf("enter student name\n");
		scanf("%s",ptr[i].name);
		printf("\nenter student marks\n");
		scanf("%d",&(ptr[i].marks));
		if(ptr[i].marks>high){high=ptr[i].marks;value=i;
		}

		
		 
	}
	
	printf("student %s got highest marks %d",ptr[value].name,ptr[value].marks);
	
	free(ptr);
}
