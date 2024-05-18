#include<stdio.h>
int main(){
 int n;
 printf("enter a number :");
 scanf("%d",&n);

// wap to print the factorial of a given no. N ....
 int product = 1;
 for ( int i=1; i<=n; i++){
    product = product*i;
    printf("The factorial %d is : %d\n",i, product);
 }
 //printf("The factorial is : %d", product);
return 0;
}