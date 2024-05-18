//Q8. Write a C program that read 5 numbers and sum of all odd values between them.


#include<stdio.h>
void main(){
	int i,n, count_positive= 0, sum=0;
	int avg_positive;
	for (i = 0; i<5; i++){
		printf("Enter the %d number ::",i+1);
		scanf("%d",&n);
		printf("\n");
	
	if ( n % 2 != 0){
		sum =sum+n; 
		
	}
	
}
printf("Sum of odd Number is :::%d",sum);
 

 
}
