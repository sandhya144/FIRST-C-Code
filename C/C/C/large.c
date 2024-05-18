#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	printf("Enter 3rd number :");
	scanf("%d",&c);
	printf("Enter 4th number :");
	scanf("%d",&d);
	
	
	if(a>=b && a>c && a>d )
	{
		printf("\n%d is the  largest number.",a);
	}
    if(b>=c && b>=d && b>=a)
    {
    	printf("\n%d is the largest number.",b);
	}
	if(c>=a && c>=b && c>=d)
	{
		printf("\n%d is the largest number.",c);
	}
	if(d>=a && d>=b && d>=c)
	{
		printf("\n%d is the largest number.",d);
	}
}
