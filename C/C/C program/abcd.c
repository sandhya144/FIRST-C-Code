#include<stdio.h>
void main()
{
	int c,r;
	for(r=1;r<=5;r++){
		for(c=5;c>r;c--){
			printf(" ");
		}
		for(c=1;c<=2*r-1;c++){
			printf("*");
		}
		printf("\n");
	}
}
