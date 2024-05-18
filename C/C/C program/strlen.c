//strlen() function
#include<stdio.h>
#include<string.h>
void main(){
char s1[100];
printf("Enter any string: ");
scanf("%[^\n]*c",&s1);
printf("Length of string: %d",strlen(s1));

}
