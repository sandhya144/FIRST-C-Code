#include<stdio.h>
void main()
{

    int A[3][3];
    int r,c;
    printf("\nEnter Matrix A \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("Enter Element Index of:%d%d",r,c);
            scanf("%d",&A[r][c]);
        }
    }//input
    printf("\n Output of An Array\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("\t%d",A[r][c]);
        }
        printf("\n");
    }

}

