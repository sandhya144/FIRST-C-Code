#include<stdio.h>
void main(){
	int r,c;
	for(r=5;r>=1;r--){
		for(c=5;c>r;c--){
			printf(" ");
		}
		for(c=1;c<=2*r-1;c++){
			printf("*");
		}
		printf("\n");
	}
}
