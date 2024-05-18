// Q12. Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

#include<stdio.h>
void main(){
	int hour ,minute , Total_minutes,h_minute;
	
	printf("Enter the time in hour::");
	scanf("%d",&hour );
	printf("Enter the time in minutes::");
	scanf("%d",&minute );
	
	h_minute = hour * 60;
	
	Total_minutes = h_minute + minute;
	
	printf("Total minutes:::::%d minutes",Total_minutes);
}

