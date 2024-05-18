// Q2. Write a C program to convert a given integer (in days) to years, months and days,assumes that all months have 30 days and all years have 365 days. 


#include<stdio.h>
void main(){
	int days, year, month,d;
	
	printf("Enter the No of days::");
	scanf("%d",&d);
	
	
	year = d / 365;
	
	month = (d - (year * 365))/30;
	
	days = (d - (year * 365) - (month * 30));
	
	
	printf("Years ::%d Months :: %d Days :: %d ", year, month, days);
}


