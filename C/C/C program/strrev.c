#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	printf("Enter Any string :");
	scanf("%[^\n]*c" ,&s1);
	printf("Reverse string :%s" , strrev(s1));
	
}
