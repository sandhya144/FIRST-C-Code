// Q10. Write a C program that converts kilometers per hour to miles per hour.


#include<stdio.h>
void main(){
	float speed_kmperhr, speed_milperhr;
	
	printf("Enter the speed in km ::");
	scanf("%f",&speed_kmperhr);
	
	speed_milperhr = speed_kmperhr * .6213712 ;
	
	printf("Speed in miles per hour ::%f",speed_milperhr); 
}
