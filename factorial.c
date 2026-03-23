#include<stdio.h>

void main(){
	
	int num , i ,fact=1;
	
	printf("enter a num : ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		fact *= i;
	}
	printf("the factorial is : %d",fact);
	
}
