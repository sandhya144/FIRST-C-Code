// Q4. Write a C program that reads two integers and checks whether they are multiplied or not.

#include<stdio.h>
void main(){
	int num1, num2;
	
	printf("Enter 1st number:::");
	scanf("%d",&num1);
    printf("Enter 2nd number:::");
	scanf("%d",&num2);
	
	if (num2 % num1 ==0){
		printf("2nd number is divisible by 1st number ");
	}
	else {
		printf("2nd number is not divisible by 1st number");
	}
		
}
