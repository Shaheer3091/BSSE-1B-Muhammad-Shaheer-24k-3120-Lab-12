#include<stdio.h>
#include<string.h>

int  recur(int a);
int  recur(int a){
    int digit,sum=0;
	if(a>=0&&a<=9){
		return a;
	}
	while(a>0)
	{digit=a%10;
	a=a/10;
	sum=digit+sum;}
	recur(sum);
	
}
	 
 



int main(){
	int a,answer;
	scanf("%d",&a);
	answer=recur(a);
	printf("%d",answer);
}
