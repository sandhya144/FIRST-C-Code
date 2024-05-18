// Q11. Write a C program to check two given integers, and print true if one of them is 30 or if their sum is 30 else print false.

#include<stdio.h>
void main(){
	int a,b,sum;
	printf("Enter the value of A::");
	scanf("%d",&a);
	printf("Enter the value of B::");
	scanf("%d",&b);
	
	sum = a + b ;
	
	if ( sum == 30){
		printf("True");
	}
	else{
		printf("False");
	}
	
}
