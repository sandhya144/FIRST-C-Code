#include<stdio.h>
void main(){
	int age;
	printf("Which age of man you like:");
	scanf("%d",&age);
	
	if(age>=17 && age<=30)
	{
		printf("You are Gay \n");
		printf("You are normal Couple\n");
		printf("You are no interested in old people\n");
		
	}
	else if(age>=30 && age<=50)
	{
		printf("You are gay\n");
		printf("You like daddys\n");
		printf("You like age difference in relationship\n");
		
		
	}

	else{
		printf("You like to play with old daddys\n");
	
		
	}
	
}
