#include<stdio.h>

int main(void){
	
      int arr[] = {1,2,3,4,5};
      int n = 5;
      int i;
	
	for(i=0; i<n/2; i++){
		int fristele = arr[i];
		int secondele = arr[n-i-1];
		
		arr[i] = secondele;
		arr[n-i-1] = fristele;
	}
	 printf("output is : \t");
		for(i=0; i<n; i+=1){
	          printf("%d \t",arr[i]);
	}
	
	
	return 0;
}
