// Q7. Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.


#include<stdio.h>
void main(){
	int i,n, count_positive= 0, sum=0;
	int avg_positive;
	for (i = 0; i<5; i++){
		printf("Enter the %d number ::",i+1);
		scanf("%d",&n);
		printf("\n");
	
	if ( n > 0){
		count_positive++;
		sum =sum+n; 
		avg_positive = sum/count_positive;
		
	}
	
}
printf("Average of positive Number is :::%d",avg_positive);
 

 
}
