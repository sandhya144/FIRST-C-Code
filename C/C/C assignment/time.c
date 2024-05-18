// Q1. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include<stdio.h>
void main(){
	int t_sec,seconds,hour,minute;
	
	printf("Enter Time in Sec::");
	scanf("%d",&t_sec);
	
	hour = t_sec / 3600;

	
	minute = (t_sec - (3600 * hour))/60;
	
	
	seconds = (t_sec - (3600 * hour) - (60 * minute));
	
	printf("H : M : S :::::%d: %d : %d",hour,minute,seconds);
}
