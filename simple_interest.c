#include<stdio.h>

int main(){
	float p , t, r;
	
	printf("enter principal amount : ");
	scanf("%f",&p);
	
	printf("enter time  : ");
	scanf("%f",&t);
	
	printf("enter rate : ");
	scanf("%f",&r);
	
	float result = (p*t*r)/100;
	
	printf("intrest is : %f",result);
	
	
	return 0;
}
