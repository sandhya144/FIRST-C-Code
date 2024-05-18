// Q1. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include<stdio.h>
void main(){
	int t_sec,seconds,minute;
	
	printf("Enter Time in Sec::");
	scanf("%d",&t_sec);
	


	
	minute = t_sec/60;
	
	
	seconds = (t_sec- (60 * minute));
	
	printf("M : S ::::: %d : %d",minute,seconds);
}
