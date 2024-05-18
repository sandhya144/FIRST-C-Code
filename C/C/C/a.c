#include<stdio.h>
void main(){
	int n,i,j;
	
	for(i=1; i<6; i++){
		for(j=1; j<i+1; j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
