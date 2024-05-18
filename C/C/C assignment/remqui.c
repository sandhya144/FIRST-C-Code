// Q13. Write a C program to integral quotient and remainder of a division

#include<stdio.h>
void main(){
	int quotient,remainder, numerator, denominator;
	
	printf("Enter the Numerator::");
	scanf("%d",&numerator);
	printf("Enter the Denomenator::");
	scanf("%d",&denominator);
	
	quotient = numerator / denominator;
	remainder= numerator % denominator;
	
	printf("\nQuotient:::%d\n",quotient);
	printf("Remainder::%d\n",remainder);
}
