#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,i;
  int *ptr;
  
  printf("Enter the size of array you dynamically want to allocate\n");
  scanf("%d",&n);
  
  ptr=(int*)malloc(n*sizeof(int));	
  for(i=0;i<n;i++){
  	  printf("provide value");
	  scanf("%d",&ptr[i]);
	  printf("\n");
  }
  for(i=0;i<n;i++){
  	printf("%d\n",ptr[i]);
  }
  
  free(ptr);
	
}
