#include<stdio.h>
void main(){
 int A[3][3];
 printf("Enter Element Index of 00:");
 scanf("%d",&A[0][0]);
 printf("Enter Element Index of 01:");
 scanf("%d",&A[0][1]);
 printf("Enter Element Index of 02:");
 scanf("%d",&A[0][2]);
 printf("Enter Element Index of 20:");
 scanf("%d",&A[2][0]);
  printf("Enter Element Index of 21:");
 scanf("%d",&A[2][1]);
  printf("Enter Element Index of 22:");
 scanf("%d",&A[2][2]);
  printf("Enter Element Index of 30:");
 scanf("%d",&A[3][0]);
  printf("Enter Element Index of 31:");
 scanf("%d",&A[3][1]);
  printf("Enter Element Index of 32:");
 scanf("%d",&A[3][2]);


 printf("\n%d %d ^%d",A[0][0],A[0][1],A[0][2]);
 printf("\n%d %d ^%d",A[1][0],A[1][1],A[1][2]);
 printf("\n%d %d ^%d",A[0][0],A[0][1],A[2][2]);

}
