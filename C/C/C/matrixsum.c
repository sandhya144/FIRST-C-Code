#include<stdio.h>
void main()
{
	int A[3][3] , B[3][3] ,C[3][3];
	int r,c;
	printf("\nEnter Matrix A\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("Enter Element Index of :%d%d ",r,c);
			scanf("%d",&A[r][c]);
		}
	}//input A
	printf("\nEnter Matrix B\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("Enter Element Index of :%d%d ",r,c);
			scanf("%d",&B[r][c]);
		}
	}//input B
	printf("\n Output of Matrix A\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\t%d",A[r][c]);
		}
		printf("\n");
	}
	
	
	printf("\n Output of Matrix B\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\t%d",B[r][c]);
		}
		printf("\n");
	}//Output
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
		C[r][c]=A[r][c]+B[r][c];	
		}
	}
	
	
	printf("\n Output of Matrix C Addition \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\t%d", C[r][c]);
		}
		printf("\n");
	}
	
	
}
