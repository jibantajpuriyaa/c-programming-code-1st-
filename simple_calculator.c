#include<stdio.h>

void main(){
	 
	 float num1, num2,r;
	 char ch;
	 
	 printf("enter frist num : ");
	 scanf("%f",&num1);

 	 
	 printf("enter operator like +, /  , * : ");
	 scanf(" %c",&ch);
	 
	 printf("enter second num : ");
	 scanf("%f",&num2);
	 
	
	 
	 switch(ch){
	 	
	 	case '+':
	 		r = num1 + num2;
	 		printf("sum = %f",r);
	 		break;

	 	case '-':
	 		 r = num1 - num2;
	 		printf("diff = %f",r);
	 		break;
			 
	 	case '*':
	 		 r = num1 * num2;
	 		printf("multiply = %f",r);
	 		break;
			 
	 	case '/':
	 		 r = num1 / num2;
	 		printf("divide  = %f",r);
	 		break;
			 
	 	
	 		
	 	default:
	 		printf("you enter wrong choise");
			 
			 			 			 			 	 		
	 	
	 }
	 
	
	
}
