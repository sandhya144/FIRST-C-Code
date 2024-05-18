//Use of concatination strcat()
#include<stdio.h>
#include<string.h>
void  main()
{
	char s1[100];
	char s2[100];
	printf("Enter 1st String : ");
	scanf("%s", &s1);
	printf("Enter 2nd String : ");
	scanf("%s", &s2);
	strcat(s1,s2);
	printf("Concatenate String : %s",s1);
	
}
