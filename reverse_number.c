#include<stdio.h>

    int main(){
     
     int num;
     int reverse;
     
     printf("enter a num: ");
     scanf("%d",&num);
     
     while(num>0){
     	int lastnum = num % 10;
     	num /= 10;
		reverse = (reverse *10 ) + lastnum;
	 }
     
     printf("%d",reverse);
     
    return 0;
    }
