#include<conio.h>
#include<stdio.h>
int main(){
	int ma,phy,che,tn;
	float p;
	
	printf("Enter the math marks::");
	scanf("%d",&ma);
	printf("Enter the physics marks::");
	scanf("%d",&phy);
	printf("Enter the chemistry marks::");
	scanf("%d",&che);
	
	tn = ma + phy + che;
	p = (tn*100)/300;
	
	printf("Total number :: %d\n",tn);
	printf("Percentage :: %f \n",p);
	
	return 0;
}
