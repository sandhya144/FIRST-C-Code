//Convert string from lowr to upr strupr(
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	printf("Enter Any String in Lower case:");
	scanf("%[^\n]*c", &s1);
	printf("String in Uppercase: %s",strupr(s1));
}
