#include<stdio.h>
void main()
{
	int A[11];
	int c;

	int i,j;
	for(i=0;i<11;i++)
	{
		printf("Enter Element Index of the %d :  ",i );
		scanf("%d",&A[i]);

	}
	printf("\nBefore sorting\n");
	for(i=0;i<11;i++)
	{
		printf("\t%d",A[i]);

	}
	for(i=0;i<11;i++){
		for(j=i+1;j<11;j++){
			if(A[i]>A[j])
			{
			c=A[i];
			A[i]=A[j];
			A[j]=c;
			}

		}
	}
	printf("\nAfter sorting\n");
	for(i=0;i<11;i++)
	{
	printf("\t%d",A[i]);

	}
}
