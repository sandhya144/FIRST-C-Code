#include<stdio.h>
void main(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=17 && age<=25)
	{
		printf("You are Young\n");
		printf("You have time to change yourself\n");
		printf("You are dependent on your parents\n");
		
	}
	else if(age>=26 && age<=35){
		printf("You are adult\n");
		printf("You don't have time to change yourself\n");
		printf("You are Independent\n");
		printf("You have to take care of your parents\n");
		
	}
	else if(age>=36 && age<=50){
		printf("You are in Middle your age\n");
		printf("You have to care of your family");
		
	}
	else{
		printf("You are in your old age\n");
		printf("Your children will takecare of you ");
		
	}
}
