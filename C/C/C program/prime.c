#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter any Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("\n divide by %d",i);
			count++;
		}
	}
	if(count==2){
		printf("\nIt is Prime Number");
		
	}
	else{
		printf("\nIt is not a Prime Number");
		
	}
	 
}
