// Q6. Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.

#include<stdio.h>
void main(){
	int i,n,count_negative=0, count_positive= 0;
	
	for (i = 0; i<5; i++){
		printf("Enter the %d number ::",i+1);
		scanf("%d",&n);
		printf("\n");
	
	if ( n > 0){
		count_positive++;
		
	}
	
	else{
		count_negative ++;
    }
 }
 
 printf("Total positive number is ::%d\n",count_positive);
 printf("Total negative number is ::%d",count_negative);
}
