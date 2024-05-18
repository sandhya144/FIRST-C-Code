#include<stdio.h>
void main()
{
	int A[3]={3,1,2};
	int c;
	int i,j;
	printf("before sorting\n");
	for(i=0;i<3;i++)
	{
		printf("\t%d",A[i]);
		
	}
	//3  1  2-->1
	for(i=0;i<3;i++)
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
	printf("\nAfter sorting\n");
	for(i=0;i<3;i++)
	{
		prtinf("\t%d",A[i]);
		
	}
}
