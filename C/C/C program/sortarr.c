#include<stdio.h>
void main()
{
	int A[3]={3,1,2};
	int c;
	int i,j;
	printf("\nBefore sorting\n");
	for(i=0;i<3;i++)
	{
		printf("\t%d",A[i]);
		
	}
	for(i=0; i<3; i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(A[i]>A[j])
			{
				c=A[i];
				A[i]=A[j];
				A[j]=c;
				
			}
		}
	}
	printf("\n After sorting\n");
	for(i=0;i<3;i++)
	{
		printf("\t%d",A[i]);
	}
	
	
}
