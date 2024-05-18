#include<stdio.h>
void main(){
	int fno,sno,tno,fono,fivno,sum=0;
	printf("Enter fno:");
	scanf("%d",&fno);
	printf("Enter sno:");
	scanf("%d",&sno);
	printf("Enter tno:");
	scanf("%d",&tno);
	printf("Enter fono:");
	scanf("%d",&fono);
	printf("Enter fivno:");
	scanf("%d",&fivno);
	
	if(fno%2==0){
		sum=sum+fno;
		
	}	
	if(sno%2==0){
		sum=sum+sno;
	}			
	if(tno%2==0){
		sum=sum+tno;
	}
	if(fono%2==0){
		sum=sum+fono;
	}
	if(fivno%2==0){
		sum=sum+fivno;
	}
	
	
	printf("sum of even: %d",sum);
}
