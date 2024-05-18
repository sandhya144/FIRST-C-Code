#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st Number : ");
	scanf("%d",&a);
	printf("Enter 2nd Number : ");
	scanf("%d",&b);
	printf("Enter 3rd Number : ");
	scanf("%d",&c);
	
	if (a==b || b==c || c==a)
	 printf("\nAll are equal");
	 
	
	
    if(a>b && b>c)
	{
		if(b>=c)
		{
			printf("\n%d is the second largest number",b);
			
		}
		else{
			printf("\n%d is the second largest number",c);
		}
    }
    else if(b>=c){
    	if(a>=c){
    		printf("\n%d is the second largest number",c);
		}
		else{
			printf("\n%d is the second largest number",b);
		}
	}
	else{
		if(a>=b){
			printf("\n%d is the second largest number",a);
		}
		else{
			printf("\n%d is the second largest number",b);
		}
	}
	return 0;
    
}
