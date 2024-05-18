// Q9. Write C program that converts Centigrade to Fahrenheit.

#include<stdio.h>
void main(){
	float c,f,t;
	char choice;
	
	
	printf("Enter Your Choice : ");
    printf("\n___________________________________\n");
	printf("Press * For Temperature in Celcius.\n");
	printf("Press + For Temperature in Farenheit.\n");
	
	



	printf("\n___________________________________\n");
	scanf("%s",&choice);
	printf("\n___________________________________\n");
    printf("Enter temperature ");
	scanf("%f",&t);
	printf("\n___________________________________\n");
	switch(choice){
	case '*':
       printf("Temperature in Celcius: %f \n ",(5*(t-32))/9);
       break;
	case '+':
       printf("Temperature in Farenheit: %f \n ",(9*t + (32*5))/5);
	break;
	default:
	printf("Invalid Operator");
	}
	printf("\n___________________________________\n");

}
